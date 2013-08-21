#Create your views here.
from django.http import HttpResponseRedirect,HttpResponse
from django.shortcuts import render_to_response
#from django.contrib.auth import authenticate,login
from django.template import RequestContext
from django.core.handlers import wsgi
import string
import json
from subprocess import call,Popen,PIPE
import os
import time
import random
from django.utils import simplejson##added
#from django.contrib.auth import views as auth_views
CWD ="/home/pointers.io/pointers/web"# os.getcwd()
TMP ="/home/pointers.io/pointers/web/tmp" #os.path.join(CWD, "tmp")

def get_random_str():
    return "".join([random.choice(string.letters) for i in range(1, 11)])

def get_random_name():
    fn = "%s_%s"%(time.strftime("%Y%m%d%H%M%S"), get_random_str())
    return os.path.join(TMP, fn)

def execute_code(filename, trace_file):
    trace = []
    proc = Popen(["./picoc", "-t", trace_file, filename],stderr=PIPE, cwd=CWD)
    (_, stderr) = proc.communicate()
    if proc.returncode != 0:
        stderr = stderr.split("\n")
        lineno = stderr[0]
        columnno = stderr[1]
        msg = "\n".join(stderr[2:])
        trace = [{"exception_msg": msg,
                    "line": int(lineno),
                    "offset": int(columnno),
                    "event": "uncaught_exception"
                }]
    else:
       tf = "%s.trace"%(trace_file)
       trace = [json.loads(i.strip()) for i in open(tf) if i.strip()]
    json_obj = {"code": open(filename).read(),
                "trace": trace
                }
    return json.dumps(json_obj)



def index(request):
        response= render_to_response('visualize2.html',{}, context_instance=RequestContext(request))
        #response.set_cookie('cname','cvalue',max_age=3000)
        return response

def execute(request):
  #      response= render_to_response('example.html',{}, context_instance=RequestContext(request))
 #       return response
        
        trace_file = get_random_name()
#        return HttpResponseRedirect("http://www.google.com")
        script =request.GET.get('user_script')
        code_file = "%s.c"%(trace_file)
        open(code_file, "w").write(script)
       # return HttpResponseRedirect("http://www.google.com")
        json_data = execute_code(code_file, trace_file)
        resp = HttpResponse(json_data, mimetype="application/json")
        resp['Cache-Control'] = 'no-cache'
        return resp
     #   response= render_to_response('example.html',{}, context_instance=RequestContext(request)) 
      #  return response
        
def example(request):
        response= render_to_response('example2.html',{}, context_instance=RequestContext(request))
        return response
def learn(request):
    response= render_to_response('learn.html',{}, context_instance=RequestContext(request))
    return response
def howtouse(request):
    response= render_to_response('howtouse.html',{}, context_instance=RequestContext(request))
    return response

'''
This functions were added for testing and checking purpose and can be removed

def newlearn(request):
    response= render_to_response('newlearn.html',{}, context_instance=RequestContext(request))
    return response

def login_user(request, template_name='registration/login.html',extra_context=None):
    response = auth_views.login(request, template_name)
    if request.POST.has_key('remember_me'):
        request.session.set_expiry(1209600) # 2 weeks
def login(request, *args, **kwargs):
    if request.method == 'POST':
        if not request.POST.get('remember_me', None):
            request.session.set_expiry(0)
    return auth_views.login(request, *args, **kwargs)
'''

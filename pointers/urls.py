from django.conf.urls import patterns, include, url
from django.conf import settings
'''
No need to import this for registration its working fyn
'''
#from django.contrib.auth.views import password_reset_confirm //no need for imports
#from django.contrib.auth.views import password_reset_complete
#from django.contrib.auth.views import password_reset_done
#from django.contrib.auth.views import password_reset
from registration.views import register
from registration.forms import RegistrationFormUniqueEmail
from django.contrib.auth.views import login,logout
# Uncomment the next two lines to enable the admin:
from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'pointers.views.home', name='home'),
    # url(r'^pointers/', include('pointers.foo.urls')),
    url(r'^$','web.views.index'),
    url(r'', include('social_auth.urls')),
    url(r'^exec/$','web.views.execute'),
    url(r'^example/$','web.views.example'),
    url(r'^learn/$','web.views.learn'),
    url(r'^howtouse/$','web.views.howtouse'),
 #   url(r'^newlearn/$','web.views.newlearn'),#created just to test
#    url(r'^accounts/password/reset/$',password_reset,{'template_name': 'registration/password_reset_form1.html'}),
  #  url(r'^accounts/login/$',login),
    url(r'^accounts/', include('registration.backends.default.urls')),
#    url(r'^accounts/password/reset/$',password_reset,{'template_name': 'registration/password_reset_form.html'}),
 #   url(r'^accounts/login/$',login),
#    url(r'^accounts/login/$',login_user, {'template_name': 'registration/login.html'}, name='auth_login'),
 #   url(r'^accounts/logout/$',logout),
 #   url(r'^accounts/register/$', register, {'form_class':RegistrationFormUniqueEmail, 'backend':'registration.backends.default.DefaultBackend' }, name='registration_register'),
 #  url(r'^accounts/password/reset/$', 'password_reset'),
 #   url(r'^accounts/password/reset/done/$', password_reset_done, {'template_name': 'registration/password_reset_done.html'}),
 #   url(r'^accounts/password/reset/confirm/$', password_reset_confirm, {'template_name': 'registration/password_reset_confirm.html'}),
 #   url(r'^accounts/password/reset/confirm/(?P<uidb36>[0-9A-Za-z]+)-(?P<token>.+)/$', password_reset_confirm, {'template_name': 'registration/password_reset_confirm.html'}),
 #   url(r'^accounts/password/reset/complete/$', password_reset_complete, {'template_name': 'registration/password_reset_complete.html'}),
   # url(r'^static/(?P<path>.*)$', 'django.views.static.serve', {'document_root': settings.STATIC_DOC_ROOT}),
    # Uncomment the admin/doc line below to enable admin documentation:
    # url(r'^admin/doc/', include('django.contrib.admindocs.urls')),

    # Uncomment the next line to enable the admin:
    url(r'^admin/', include(admin.site.urls)),
)

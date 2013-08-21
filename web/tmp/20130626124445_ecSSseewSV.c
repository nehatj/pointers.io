#include<stdio.h>
int push();
int pop();
int display();
struct key
{
  int top;
  int stk[5];
};
struct key s;
int main ()
{
  
  s.top=-1;
  printf ("STACK OPERATION\n");
  //keyarr.c = 'A';
  //s.stk[0] = 10;
    push();
    push();
    pop();
    display();
    return 0;
}
int push()
{    
  int num=5;
	if (s.top == (5 - 1))
	{
		printf ("Stack is Full\n");
		return;
	}
	else
	{
		//printf ("Enter the element to be pushed\n");
		//scanf ("%d", &num);
		s.top = s.top + 1;
		s.stk[s.top] = num;
	}
  return 0;
}
int pop()
{
    int num;
	if (s.top == - 1)
	{
		printf ("Stack is Empty\n");
		return (s.top);
	}
	else
	{
		num = s.stk[s.top];
		printf ("poped element is = %d\n", s.stk[s.top]);
		s.top = s.top - 1;
	}
	return(num);
}
int display()
{
    int i;
	if (s.top == -1)
	{
		printf ("Stack is empty\n");
		return;
	}
	else
	{
		printf ("\nThe status of the stack is\n");
		for (i = s.top; i >= 0; i--)
		{
			printf ("%d\n", s.stk[i]);
		}
	}
	printf ("\n");
    return 0;
}
#include<stdio.h>
int queue[6]={0,0,0,0,0,0};
int rear=0,front=0;
void insert(void);
void del(void);
void disp(void);
void cre(void);
void main()
{
    int user=0;
    insert();
    insert();
} 
void insert(void)
{
    int t=3;
    if(rear<6)
    {
        //printf("\n\t ENTER A VALUE IN QUEUE");
        //scanf("%d",&t);
        queue[rear]=t;
        rear++;
    }
    else
    {
        printf("\n\t Q OVERFLOW!!!!!!!!!!!!!!!");
    }
}

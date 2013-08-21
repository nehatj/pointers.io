#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
struct node
{
        int num;
        struct  node *ptr;
};
    typedef struct node NODE;
void main()
{
    NODE *head, *first, *temp = 0;

    int count = 0;

    int choice = 1;

    first = 0;
       // head  = (NODE *)malloc(sizeof(NODE));

        //printf("Enter the data item\n");
        head.num=10;
        //scanf("%d", &head-> num);

        if (first != 0)

        {

            temp->ptr = head;

            temp = head;

        }

        else

        {

            first = temp = head;

        }
    printf("hi");
        temp->ptr = 0;

    /*  reset temp to the beginning */

    temp = first;

    printf("\n status of the linked list is\n");

    while (temp != 0)

    {

        printf("%d=>", temp->num);

        count++;

        temp = temp -> ptr;

    }

    printf("NULL\n");

    printf("No. of nodes in the list = %d\n", count);

}
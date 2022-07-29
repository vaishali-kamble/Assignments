#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data= no;
    newn->next= NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }

    else
    {
        newn->next= *Head;
        *Head=newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements from linked list are : \n");

    PNODE temp=NULL;

    temp= Head;


    while(temp != NULL)
    {
        printf("| %d |-> ",temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

/*
int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}*/

int Addition(PNODE Head)
    
{
        int iCnt = 0;
        int sum = 0;
        PNODE temp=NULL;

        temp= Head;
        while (temp != NULL)
        {
         
            {

                sum=sum+(temp->data);
            }
            temp = temp->next;
        }
        return sum;
}
       


    int main ()
    {
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First); 

   iRet=Addition(First);


    if(iRet == -1)
    {
        printf("There is no such element in \n");
    }
    else
    {
        printf("Addition of elements  : %d\n",iRet);
    }
    
    return 0;
    }
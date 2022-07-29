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

int DisplayPrime(PNODE Head)
    

{
        int iCnt = 1;
        int last = 0;
        PNODE temp=NULL;

        temp= Head;
        while (temp != NULL)
        {
            
            if (temp->data % iCnt ==0 )
            {
                return -1;
                printf("%d \n", temp->data);
                iCnt++;
            }
            temp = temp->next;

        }
       
        return last;
       
}

    int main ()
    {
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First); 

   iRet=DisplayPrime(First);


    if(iRet == -1)
    {
        printf("There is no such element in \n");
    }
    else
    {
        printf("Prime no is  : %d\n",iRet);
    }
    
    return 0;
    }
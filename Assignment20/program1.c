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

int Perfect(PNODE Head)
    
{

        int num = 1, iCnt=0, sum=0;
        
        while (Head != NULL)
        {
            if((num) % iCnt == 0);
            
            printf("%d",Head->data);
            {
              sum=sum+iCnt;
              printf("%d",sum);
              iCnt++;
            }
            
            Head = Head->next;
        }

        if(sum == (Head->data))
        {
            return sum;
        }
        else

        {
            return -1;
        }

        
}

    int main ()
    {
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First); 

    iRet= Perfect(First);
    
    if(iRet == -1)
    {
        printf("There is no such element in \n");
    }
    else
    {
        printf("Perfect number  is : %d\n",iRet);
    }
    
    return 0;
    }
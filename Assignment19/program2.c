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

int SearchLastOcc(PNODE Head , int ino)
    
{
        int iCnt = 0;
        int last = 0;
        PNODE temp=NULL;

        temp= Head;
        while (temp != NULL)
        {
            iCnt++;
            if (temp->data == ino)
            {
                last=iCnt;
            }
            temp = temp->next;

        }
       
        return last;
 
}

    int main ()
    {
    PNODE First = NULL;
    int iSearchno = 0;
    int iRet=0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First); 
    printf("enter the search element: \n");
    scanf("%d", &iSearchno); 
    iRet = SearchLastOcc(First,iSearchno);


    if(iRet == -1)
    {
        printf("There is no such element in \n");
    }
    else
    {
        printf("Element Last occured at : %d\n",iRet);
    }
    
    return 0;
    }
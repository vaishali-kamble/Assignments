#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt=0;
    BOOL found=FALSE;

    for(iCnt=0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] ==11)
        {

           found=TRUE;
           break;
        }
      
    }
    return found;
   
    
    

}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet;

    printf("Enter the number of element");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize*sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {

        scanf("%d",&ptr[iCnt]);

    }


    bRet=Check(ptr,iSize);

    if (bRet == TRUE)
    {
        printf("11 is present ");
    }
    else
    {
    printf("11 is not present ");
    }

    free(ptr);

    return 0;
}
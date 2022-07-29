#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iSumEven=0,iSumOdd=0, iDiff=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    if((Arr[iCnt] % 2) == 0) 
    {
       iSumEven++;
    }
    else
    {
        iSumOdd++;
    }
    iDiff = iSumEven - iSumOdd;
return iDiff;
}

int main()
{
    int iRet = 0;
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter element size \n");
    scanf("%d", &iSize);

    ptr= (int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the values of an array",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = CountEven(ptr, iSize);
    printf("Result is %d",iRet);
    free(ptr);

      return 0;
}
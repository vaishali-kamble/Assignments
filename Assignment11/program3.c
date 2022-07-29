#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;

bool Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin=Arr[0];
    int iMax=Arr[0];
    int iDiff=0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(iMin > Arr[iCnt])     
            {
                iMin=Arr[iCnt];
            }
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(iMax < Arr[iCnt])     
            {
                iMax=Arr[iCnt];
            }
    }

    iDiff= iMax-iMin;
    return iDiff;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Difference(ptr, iSize);
    
        printf("Difference is %d\n", bRet);
    
    
    free(ptr);

    return 0;
}
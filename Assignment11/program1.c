#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;

bool Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax=Arr[0];
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(iMax < Arr[iCnt])     
            {
                iMax=Arr[iCnt];
            }   
     
    }
    return iMax;
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

    bRet = Maximum(ptr, iSize);
    
        printf("Largest number is %d\n", bRet);
    
    
    free(ptr);

    return 0;
}
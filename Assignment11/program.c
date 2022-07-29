#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;

bool check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
            if(Arr[iCnt] == iNo)        
            {
                break;
            }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
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

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    bRet = check(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("Element is present \n");
    }
    else
    {
        printf("Element is not present \n");
    }
     free(ptr);

    return 0;
}
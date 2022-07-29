#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    //          1               2               3
    for(iCnt =0; iCnt <iLength; iCnt++)
    {
            if((Arr[iCnt] >iStart) && (Arr[iCnt]<iEnd)  )  // 4
            {
                printf("%d", Arr[iCnt]);
            }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0,iValue2=0, iRet;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the start element to search\n");
    scanf("%d",&iValue1);
    
    printf("Enter the end element to search\n");
    scanf("%d",&iValue2);

    iRet = Range(ptr, iSize, iValue1, iValue2);
    
    free(ptr);

    return 0;
}
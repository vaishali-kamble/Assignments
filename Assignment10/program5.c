#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMult=1;
    //          1               2               3
    for(iCnt =0; iCnt <iLength; iCnt++)
    {
            if(Arr[iCnt]%2 ==0)  // 4
            {
                iMult=iMult*iCnt;
            }

    }
    return iMult;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
   

    iRet = Product(ptr, iSize);
     printf("Product is %d\n",iRet);
   
    free(ptr);

    return 0;
}
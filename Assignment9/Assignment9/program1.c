//Accept n numbers from user and return difference between  summation of even elements and odd elements.
// N : 6
// Elements: 85 66 3 80 93 88
// 53 (234-181)

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iFrequency=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    if((Arr[iCnt] % 2) == 0) 
    {
       iFrequency++;
    }
return iFrequency;
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

    printf("Enter the values of an array \n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = CountEven(ptr, iSize);
    printf("Result is %d",iRet);
    free(ptr);

      return 0;
}
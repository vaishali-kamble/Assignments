#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit=0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int div = 0;
        int number = Arr[iCnt];
        do{
           int mod = number % 10;
           div = number/10;
           if(mod == 3)
            {
                printf("%d ", Arr[iCnt]);     
                break;
            }
            else
                number = number /10;
        }
        while (div > 0);        
    }
}



int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Digits(ptr, iSize);
    
    
    
    free(ptr);

    return 0;
}
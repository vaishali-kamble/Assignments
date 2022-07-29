#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chksm(char ch)
{
    BOOL chk = FALSE;
    
    if((ch >= 'a') && (ch <='z'))
    {
        chk = TRUE;
    }
    
    return chk;
}
int main()
{
    char cValue = '\0';
    BOOL bRet=FALSE;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = chkdig(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case letter");
    }
    else{
         printf("It is not small case letter ");
    }
}
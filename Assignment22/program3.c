#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkdig(char ch)
{
    BOOL chk = FALSE;
    
    if((ch >= '0') && (ch <='9'))
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
        printf("It is digit");
    }
    else{
         printf("It is not digit ");
    }
}
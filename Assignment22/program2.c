#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkcaps(char ch)
{
    BOOL chk = FALSE;
    
    if((ch >= 'A') && (ch <='Z'))
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

    bRet = chkcaps(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital");
    }
    else{
         printf("It is not capital ");
    }
}
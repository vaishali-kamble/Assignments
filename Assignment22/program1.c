#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkAlpha(char ch)
{
    BOOL chk = FALSE;
    
    if((ch >= 'A') && (ch <='Z') ||(ch >= 'a') && (ch <='z'))
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

    bRet = chkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else{
         printf("It is not character ");
    }
}
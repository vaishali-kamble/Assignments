#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSpecial(char ch)
{
    BOOL chk = FALSE;
    
    if((ch == '!') || (ch =='@') ||(ch == '#') || (ch =='$')||(ch == '^') || (ch =='&')||(ch == '*'))
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

    bRet = chkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else{
         printf("It is not special character ");
    }
}
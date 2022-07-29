//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      ChkVowel
//  Description :       Used to accept one character from user and check weather the character is vowel (a,e,i,o,u)or not.
//  Date :              21/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cCharcter)
{
    // char cUpperChar = toupper(cCharcter);
    //if ( (cCharcter ==('a','i','o','e','u')) || (cCharcter ==('A','E','I','O','U')) )
    if (cCharcter =='a' ||cCharcter=='e'||cCharcter=='i'||cCharcter=='o'||cCharcter=='o'||cCharcter=='A'||cCharcter=='E'||cCharcter=='I'||cCharcter=='O'||cCharcter=='U')
    {
        return TRUE;
    }

    else{
        return FALSE;
    }

    
}
/////////////////////////////////////////////////////////////////
/// Write a program which accept one character from user and check weather the character is vowel (a,e,i,o,u)or not.
//////////////////////////////////////////////////////////////////

int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("enter the character \n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    /*printf("%b", bRet);*/
    
    if(bRet == TRUE)
    {
        printf("It is vowel");
    
    }
    
    else
    {
        printf("It is not vowel");

    }
    
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              E
//              It is vowel
//              d
//              It is not vowel
//
/////////////////////////////////////////////////////////////////////
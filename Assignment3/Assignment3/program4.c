//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      DisplayConvert
//  Description :       Used to Accept one character from user and convert case of that character
//  Date :              21/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <ctype.h>

void DisplayConvert(int CValue)

{
    
   
    if (CValue==tolower(CValue))
    {
        printf("%c",toupper(CValue));
    }
    else if (CValue==toupper(CValue))
    {
        printf("%c",tolower(CValue));
    }
}
/////////////////////////////////////////////////////////////////
/// Accept one character from user and convert case of that character
//////////////////////////////////////////////////////////////////

int main()
{
    char cValue=0;

    printf("enter the character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the character
//              a
//              A   
//
/////////////////////////////////////////////////////////////////////
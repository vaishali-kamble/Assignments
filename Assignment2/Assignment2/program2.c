//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to Accept one number from user and print that number * on screen
//  Date :              20/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("* \n");
        iNo--;

    }
}
/////////////////////////////////////////////////////////////////
/// Accept one number from user and print that number * on screen
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              3
//              *    
//              *           
//              *    
/////////////////////////////////////////////////////////////////////
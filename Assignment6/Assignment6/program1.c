
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      DisplayDigit
//  Description :       Used to accept one number from user and display its digits in reverse order
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
while (iNo > 0)
    {
        iDigit= iNo % 10;
        printf("%d \n", iDigit);
        iNo = iNo / 10;
    }
    
    

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and display its digits in reverse order
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter the number  ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//             2395
//             5
//             9
//             3
//             2
/////////////////////////////////////////////////////////////////////
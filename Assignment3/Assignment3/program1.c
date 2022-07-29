//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to accept one numberfrom user and print that number of even numbers on the screen.
//  Date :              21/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iNum=0;
   
    if (iNo<=0)
    {
        return;
    }
    for(iNum=1; iNum<=iNo; iNum++)
    {
        printf("%d  ",(iNum*2)); 

    }
}
/////////////////////////////////////////////////////////////////
/// Write a program which accept one numberfrom userand print that number of even numbers on the screen.
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("enter the number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              7
//              2   4   6   8   10   12   14    
//
/////////////////////////////////////////////////////////////////////
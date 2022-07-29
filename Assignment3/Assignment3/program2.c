//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to accept one numberfrom userand print even factor of that numbers on the screen.
//  Date :              21/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i=0;
   
    if (iNo<=0)
    {
        return;
    }
    for(i=1; i<=iNo; i++)

    {
        if((iNo%i==0)&(i%2==0))
        printf("%d  ",i); 

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

    DisplayFactor(iValue);
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              7
//              2   4   6   8   10   12   14    
//
/////////////////////////////////////////////////////////////////////
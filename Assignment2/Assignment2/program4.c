//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to Accept one number from user if number is less than 10 then print "Hello "on 
//                      screen otherwise print "Demo"
//  Date :              20/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;

    for (i = 0; i < iFrequency; i++)
    {
      printf("%d  ",iNo);

    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Accept one number from user if number is less than 10 then print "Hello "on screen otherwise print "Demo"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iCount=0;

    printf("enter the first number \n");
    scanf("%d",&iValue);


    printf("enter the second number \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the first number
//              12
//              enter the second number  
//              5
//              12 12 12 12 12 
//              
//              enter the first number
//              -2
//              enter the second number  
//              3
//              -2 -2 -2 
//               
/////////////////////////////////////////////////////////////////////
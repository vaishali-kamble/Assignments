//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to accept one number from user and display its factors in decreasing order.
//  Date :              26/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int i=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=(iNo/2); (i>=1); i--)

    {
        if((iNo%i==0))
        {
         printf("%d \n",i);
        }
    }
   }
/////////////////////////////////////////////////////////////////
/// Write a program which accept one number from  user and display its factors in decreasing order.
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    
    printf("enter the number \n");
    scanf("%d",&iValue);

    FactRev(iValue);


    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              12
//              144    
//
//              enter the number
//              13
//              1   
//
/////////////////////////////////////////////////////////////////////
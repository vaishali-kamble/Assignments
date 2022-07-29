//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      MultFactor
//  Description :       Used to accept one number from user and display its multiplication of factor.
//  Date :              26/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFactor(int iNo)
{
    int i=0;
    int imult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1; i<=(iNo/2); i++)

    {
        if((iNo%i==0))
        {
         imult=imult*i;
        }
    }
    return imult;
}
/////////////////////////////////////////////////////////////////
/// Write a program which accept one number from user display its multiplication of factor.
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter the number \n");
    scanf("%d",&iValue);

    iRet=MultFactor(iValue);

    printf("%d",iRet);
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
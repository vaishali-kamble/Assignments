
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      ChkZero
//  Description :       Used to accept one number from user and check whether it contain zero or not.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
while (iNo > 0)
    {
        iDigit= iNo % 10;
        if((iDigit==0)||(iDigit==1))
        {
            return TRUE;

        }
        iNo = iNo / 10;
    }
    
    return FALSE;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and check whether it contain zero or not.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the number  ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if (bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
       printf("There is no zero"); 
    }

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

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      MultFact
//  Description :       Used to to accept one number from user and display multiplication of factor
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMult=iMult*iCnt;
        }
    }
return iMult;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and display multiplication of factor.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number \n ");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);
    printf("Multiplication of factor :%d",iRet);

    return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              12
//             
//             Difference between summation of its factors and  non factors : -34
//              
//
/////////////////////////////////////////////////////////////////////
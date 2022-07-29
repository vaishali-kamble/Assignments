
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      NonFact
//  Description :       Used to accept one number from user and display its non factors
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d \n",iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and display its non factors .
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              10

//              3
//              4
//              6
//              7
//              8
//              9
/////////////////////////////////////////////////////////////////////
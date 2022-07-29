
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      CountFour
//  Description :       Used to accept one number from user and count frequency of such a digits which are less than 6.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Count(int iNo)
{
    int iDigit=0;
    int iCnt = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
while (iNo > 0)
    {
        iDigit= iNo % 10;
        if(iDigit<=5)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program toto accept one number from user and count frequency of such a digits which are less than 6.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number  ");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    {
       printf("%d",iRet); 
    }

    return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//             1018
//             3
/////////////////////////////////////////////////////////////////////
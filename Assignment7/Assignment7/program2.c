
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      DisplayDigit
//  Description :       Used to to accept one number from user and display its digits in reverse order
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountOdd(int iNo)
{
 int iDigit=0;
 int iCnt=0;

    if (iNo<0)
    {
        iNo= -iNo;
    }
    while (iNo > 0)
    {
        
     iDigit= iNo % 10;
       if((iDigit %2)!=0)
       {
           iCnt++;
       }
        iNo = iNo / 10;
    }
return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and display its digits in reverse order
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);


      return 0;

}

/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              2395
//              3
//              
//
/////////////////////////////////////////////////////////////////////
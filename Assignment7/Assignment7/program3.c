
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      CountRange
//  Description :       Used to accept one number from user and return the count of digits in between 3 and 7
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountRange(int iNo)
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
       if((iDigit==4)|| (iDigit==6)||(iDigit==5))
       {
           iCnt++;
       }
        iNo = iNo / 10;
    }
return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and return the count of digits in between 3 and 7
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number \n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);


      return 0;

}

/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              4521
//               2
//
/////////////////////////////////////////////////////////////////////
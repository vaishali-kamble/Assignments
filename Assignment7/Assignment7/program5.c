
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      CountDiff
//  Description :       Used to accept one number from user and return difference between summation of even and odd digits.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountDiff(int iNo)
{
 int iDigit=0;
 int iSumeven=0;
 int iSumodd=0;

    if (iNo<0)
    {
        iNo= -iNo;
    }
    while (iNo > 0)
    {
        
     iDigit= iNo % 10;
     if(iDigit%2==0)
       {
           iSumeven=iSumeven+iDigit;
       }
       else
       {
           iSumodd=iSumodd+iDigit;
       }
        iNo = iNo / 10;
    }
return iSumeven - iSumodd ;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and return difference between summation of even and odd digits.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);


      return 0;

}

/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              2395
//             
//              -15
//              
/////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      MultDigits
//  Description :       Used to accept one number from user and return multiplication of all digits.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultDigits(int iNo)
{
 int iDigit=0;
 int iMult=1;

    if (iNo<0)
    {
        iNo= -iNo;
    }
    while (iNo > 0)
    {
        
     iDigit= iNo % 10;
       {
           iMult=iMult*iDigit;
       }
        iNo = iNo / 10;
    }
return iMult;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and return return multiplication of all digits.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);


      return 0;

}

/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              2395
//             
//              270
//              
//
/////////////////////////////////////////////////////////////////////
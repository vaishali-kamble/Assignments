//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      ChkEven
//  Description :       used to accept one number from user and check weather number is even or odd
//  Date :              20/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2)==0)
      {
        return true;
      }

     else
      {
        return false;
      }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Accept one number from user and check weather number is even or odd
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    BOOL bRet = false;

    printf("enter the  number \n");
    scanf("%d",&iValue);


    bRet = ChkEven(iValue);

    
  if(bRet == true)
  {
      printf("%d is even number \n", iValue);
  }
  else{
      printf("%d is odd number \n", iValue);
  }
    return 0;

    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the  number
//              3
//              3 is odd number
//               
/////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//
//  Function Name:      check
//  Description :       Used to Accept one number and check weather it is divisible by5 or not
//  Date :              19/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

  BOOL check(int iNo)
  {
      if((iNo%5)==0)
      {
          return TRUE;
      }

      else
         {
           return FALSE;
         }
  }

////////////////////////////////////////////////////////
/// Accept one number and check weather it is divisible by5 or not
////////////////////////////////////////////////////////

int main()
{
int iValue=0;
BOOL bRet=FALSE;

printf("Enter the number \n");
scanf("%d",&iValue);

bRet=check(iValue);

if (bRet==TRUE)
{
    printf("Yes, it is divisible by 5");
}
else
{
    {
    printf("No it is not divisible by 5");
}


}

    return 0;
}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              10
//              Yes, it is divisible by 5    
//
/////////////////////////////////////////////////////////////////////
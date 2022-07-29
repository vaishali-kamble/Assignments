
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      FactDiff
//  Description :       Used to accept one number from user and return difference between summation of its factorand non factors
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int iSumfact=0;
    int iSumNonfact=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
           iSumfact=iSumfact + iCnt;
        }

        else
        {
            iSumNonfact=iSumNonfact+iCnt;
        }
    
    
    }

//return iSum;
return iSumfact - iSumNonfact;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and return difference between summation of its factorand non factors
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Difference between summation of factors and non factors :%d",iRet);

return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              12

//              Difference between summation of factors and non factors : -34
/////////////////////////////////////////////////////////////////////
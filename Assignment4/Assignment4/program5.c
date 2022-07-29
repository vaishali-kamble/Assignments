
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      FactDiff
//  Description :       Used to to accept one number from user and return difference between summation ofits factors and non factors.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FactDiff(int iNo)
{
int iCnt=0;
int iSumfact=0;
int iSumnonfact=0;
int iDiffsumfact=0;


for(iCnt = 1; iCnt < iNo; iCnt++)
{   
    if((iNo%iCnt) ==0)
    {
         iSumfact=iSumfact + iCnt;
    }
    else
    {
        iSumnonfact=iSumnonfact + iCnt;

    }
     iDiffsumfact = iSumfact - iSumnonfact;
}
return iDiffsumfact;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and return difference between summation ofits factors and non factors.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    

    int iValue = 0;
    int iRet=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("Difference between summation of its factors and  non factors :%d \n", iRet);


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
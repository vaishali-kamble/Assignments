//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      SumNonFactor
//  Description :       Used to to accept one number from user and return summation of non factors.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFactor(int iNo)
{
int iCnt=0;
int iSum=0;

if (iNo<0)
{
    iNo=-iNo;
}

for(iCnt = 1; iCnt <= iNo; iCnt++)
{   
    if((iNo%iCnt) !=0)
    {
         iSum=iSum + iCnt;
    }
}
return iSum;

}


/////////////////////////////////////////////////////////////////////////////////////////////
///  write program to accept one number from user and return summation of non factors.
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    

    int iValue = 0;
    int iRet=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet=SumNonFactor(iValue);
    printf("sum of non factors :%d \n", iRet);


    return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//              12
//             
//              sum of non factors: 50
//              
//
/////////////////////////////////////////////////////////////////////

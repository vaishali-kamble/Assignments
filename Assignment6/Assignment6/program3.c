
//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      CountTwo
//  Description :       Used to to accept one number from user and count frequency of two in it.
//  Date :              27/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit==2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// write program to accept one number from user and count frequency of two in it.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number  ");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);

    {
       printf("%d",iRet); 
    }

    return 0;

}


/////////////////////////////////////////////////////////////////////
//
//  Output :   enter the number
//             922432
//             3
/////////////////////////////////////////////////////////////////////
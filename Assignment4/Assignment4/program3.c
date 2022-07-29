//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:      DisplayNonFactor
//  Description :       Used to accept one number from user and display its non factors.
//  Date :              26/04/2022
//  Author :            Vaishali D Kamble
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayNonFactor(int iNo)
{
int iCnt=0;
if (iNo<0)
{
    iNo=-iNo;
}

for(iCnt=1;iCnt<=(iNo);iCnt++)
{
    if((iNo%iCnt) !=0)
    {
    printf(" %d \n",iCnt );
    }
}

}
/////////////////////////////////////////////////////////////////////////////////////////////
///  write program to accept one number from user and display its non factors.
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    

    int iValue = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    DisplayNonFactor(iValue);

    return 0;

}
/////////////////////////////////////////////////////////////////////////////////////////////

///output : Enter the number
///         10
///
///         3
///         4
///         6
///         7
///         8
///         9
// Time complexity :o(N)
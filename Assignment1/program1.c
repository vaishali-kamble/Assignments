//////////////////////////////////////////////////////////
//
//  Function Name:  Division
//  Description :      Used to perform division of 2 numbers
//  Input :              Integer, Integer
//  Output :            Integer
//  Date :               19/04/2022
//  Author :           Vaishali D Kamble
//
//////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns=0;

    if(iNo2==0)
    {
        return -1;
    }
        iAns=iNo1/iNo2;
        return iAns;
    
}

////////////////////////////////////////////////////////
/// Program to divide two numbers
////////////////////////////////////////////////////////

int main()
{

    int iValue1=15, iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);
    printf("Division is%d", iRet);

    return 0;

}

/////////////////////////////////////////////////////////////////////
//
//  Input :         15     5
//  Output :        3
//
/////////////////////////////////////////////////////////////////////
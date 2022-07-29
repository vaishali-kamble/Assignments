    #include<stdio.h>
int DisplayI(int ino)
{
    int fact=1;
    while(ino!=1)
    {   
        fact = fact *ino;
        ino--;
    }
    return fact;
}
int DisplayR(int ino)
{
    static int fact=1;
    if(ino!=1)
    {   
        fact = fact *ino;
        ino--;
    }
    return fact;
}

int main()
{
    int iValue = 0,iRet=0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet = DisplayR(iValue);
    printf("%d ",iRet);
}


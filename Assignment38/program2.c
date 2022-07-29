    #include<stdio.h>
int DisplayI(int ino)
{
    int sum=0,temp;
    while(ino!=0)
    {   
        temp=ino%10;
        sum= sum+temp;
        ino = ino/10;

    }
    return sum;
}
int DisplayR(int ino)
{
    static int sum=0,temp;
    if(ino!=0)
    {   
        temp=ino%10;
        sum= sum+temp;
        ino = ino/10;
        DisplayR(ino);
    }
    return sum;
}
int main()
{
    int iValue = 0,iRet=0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet = DisplayI(iValue);
    printf("%d ",iRet);
}


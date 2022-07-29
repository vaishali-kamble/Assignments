    #include<stdio.h>
int DisplayI(int ino)
{
    int mult=1,temp;
    while(ino!=0)
    {   
        temp = ino%10;
        mult = mult *temp;
        ino=ino/10;
        
    }
    return mult;
}
int DisplayR(int ino)
{
    static int mult=1,temp;
    while(ino!=0)
    {   
        temp = ino%10;
        mult = mult *temp;
        ino=ino/10;
        
    }
    return mult;
}

int main()
{
    int iValue = 0,iRet=0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    iRet = DisplayR(iValue);
    printf("%d ",iRet);
}


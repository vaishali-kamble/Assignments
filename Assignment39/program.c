    #include<stdio.h>
int Max(int ino)
{

        int temp1=0,max=0;
    while(ino>0)
    {   
        
        temp1= ino%10;
        if(temp1>max)
        {
        max= temp1;
        }
        ino=ino/10;
    }
    return max;
}

int MaxR(int ino)
{

    static int temp1=0,max=0;
    if (ino>0)
    {   
        
        temp1= ino%10;
        if(temp1>max)
        {
        max= temp1;
        }
        ino=ino/10;
        MaxR(ino);
    }
    return max;
}
int main()
{
    int iRet=0;
    int value=0;
    printf("Enter number: \n");
    scanf("%d",&value);
    iRet = MaxR(value);
    printf("%d",iRet);
}


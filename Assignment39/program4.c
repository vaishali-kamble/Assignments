    #include<stdio.h>
int Min(int ino)
{

        int temp1=0,min=0;
    while(ino>0)
    {   
        
        temp1= ino%10;
        if(temp1<min)
        {
        min= temp1;
        }
        ino=ino/10;
    }
    return min;
}

int MinR(int ino)
{

    static int temp1=0,min=0;
    if (ino>0)
    {   
        
        temp1= ino%10;
        if(temp1>min)
        {
        min= temp1;
        }
        ino=ino/10;
        MinR(ino);
    }
    return min;
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


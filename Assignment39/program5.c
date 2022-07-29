    #include<stdio.h>
void Reverse(int ino)
{
    while(ino!=0)
    {   
        
        printf("%d",ino%10);
        
        ino=ino/10;
    }
}

void ReverseR(int ino)
{
    if(ino!=0)
    {   
        
        printf("%d",ino%10);
        
        ino=ino/10;
        ReverseR(ino);
    }
}
int main()
{
    int iRet=0;
    int value=0;
    printf("Enter number: \n");
    scanf("%d",&value);
    ReverseR(value);
}


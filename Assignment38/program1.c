    #include<stdio.h>
void DisplayI(int ino)
{
    while(ino!=0)
    {
        printf("%d \t * \t",ino);
        ino--;
    }

}

void DisplayR(int ino)
{
    if(ino!=0)
    {
        printf("%d \t* \t",ino);
        ino--;
         DisplayR(ino);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    DisplayR(iValue);
}


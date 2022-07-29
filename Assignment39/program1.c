    #include<stdio.h>
int WhiteSpaceI(char *str)
{
    int i=0, icnt=0;
    while(str[i]!='\0')
    {   
        if(str[i]= ' ')
       icnt++;
       i++;
    }
    return icnt;
}
int WhiteSpaceR(char *str)
{
    static int i=0, icnt=0;
    while(str[i]!='\0')
    {   
        if(str[i]= ' ')
       icnt++;
       i++;
    }
    return icnt;
}
int main()
{
    int iRet=0;
    char arr[20];
    printf("Enter String: \n");
    scanf("%s",arr);
    iRet = WhiteSpaceR(arr);
    printf("%d ",iRet);
}


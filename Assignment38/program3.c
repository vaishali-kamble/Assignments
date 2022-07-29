    #include<stdio.h>
int StrlenI(char *str)
{
    int i=0, icnt=0;
    while(str[i]!='\0')
    {   
       icnt++;
       i++;
    }
    return icnt;
}

int StrlenR(char *str)
{
    static int i=0, icnt=0;
    while(str[i]!='\0')
    {   
       icnt++;
       i++;
       StrlenR(str);
    }
    return icnt;
}
int main()
{
    int iRet=0;
    char arr[20];
    printf("Enter String: \n");
    scanf("%s",arr);
    iRet = StrlenR(arr);
    printf("%d ",iRet);
}


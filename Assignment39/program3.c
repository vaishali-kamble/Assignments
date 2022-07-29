    #include<stdio.h>
int small(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
      if((*str >='a')&&(*str <= 'z'))
    {
        icnt++;
    }
        str++;
    }
    return icnt;
}

int smallR(char *str)
{
    static int icnt=0;
    while(*str!='\0')
    {
      if((*str >='a')&&(*str <= 'z'))
    {
        icnt++;
    }
        str++;
    }
    return icnt;
smallR( str);
}
int main()
{
    int iRet=0;
    char arr[20];
    printf("Enter string: \n");
    scanf("%s",arr);
    iRet = small(arr);
    printf("%d",iRet);
}


// Write a program to accept a string from user and check weather it contain vowel or not.
// Input  : "Marvellous "
// output :  True

#include<stdio.h>
# define true 1
# define false 0

typedef int bool;
bool ChkVowel(char *str)
{   
    bool flag = false;
    while(*str!='\0')
    {
        if((*str =='a')||(*str == 'A')||(*str =='i')||(*str == 'I')||(*str =='e')||(*str == 'E')||(*str =='o')||(*str == 'O')||(*str =='u')||(*str == 'U'))
        {
            flag = true;
        }
        str++;
    }
    return flag;
}

int main()
{
    char arr[20];
    bool bRet = 0;

    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == true)
    {
        printf("It contains Vowel");
    }
    else
    {
        printf("It does not contains vowel");
    }
    return 0;
}
/* write a program which accept string from user and check whether
  it contains vowels init or not
*/#include<stdio.h>
#include<stdbool.h>

bool checkvowel(char *str)
{
    while(*str !='\0')
    {
    if(*str>='a' && *str<='e' || *str>='i' && *str<='o' || *str=='u'  )
    {
        return true;
    }
        str++;
    }
     return false;
    
    }
int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the stirng:\n");
    scanf("%c",arr);

    bRet = checkvowel(arr);

    if(bRet == true)
    {
        printf("contains vowel\n");
    }
    else
    {
        printf("It is no vowel\n");
    }

    return 0;
}
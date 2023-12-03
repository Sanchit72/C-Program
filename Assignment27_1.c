// write a program whcih accept string from useer and convert it into lower case

#include<stdio.h>

void strlwrx(char *str)
{
   int icnt=0;

    while(*str !='\0')
    {
    if((*str>='A') && (*str<='Z'))
    {
     *str = *str + ('a' - 'A');

    }
    str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n]s",arr);

    strlwrx(arr);

    printf("Modified string %s",arr);

    return 0;
}
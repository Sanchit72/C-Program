// write a program whcih accept string from useer and convert it into upper case

#include<stdio.h>

void struprx(char *str)
{
   int icnt=0;

    while(*str !='\0')
    {
    if((*str>='a') && (*str<='z'))
    {
     *str = *str - ('a' - 'A');

    }
    str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n]s",arr);

    struprx(arr);

    printf("Modified string %s",arr);

    return 0;
}
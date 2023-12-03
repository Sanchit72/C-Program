// write a program whcih accept string from useer and toggle the case

#include<stdio.h>

void strtogglex(char *str)
{
   int icnt=0;

    while(*str !='\0')
    {
    if((*str>='a') && (*str<='z'))
    {
     *str = *str - ('a' - 'A');

    }
    else if (*str >= 'A' && *str <= 'Z')
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

    strtogglex(arr);

    printf("Modified string %s",arr);

    return 0;
}
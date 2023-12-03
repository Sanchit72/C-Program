// write a program whcih accept string from useer and count number of small character

#include<stdio.h>

int countsmall(char *str)
{
   int icnt=0;

    while(*str !='\0')
    {
    if((*str>='a') && (*str<='z'))
    {
     icnt++;
    }
    str++;
    }
    return icnt;
}
int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter string :\n");
    scanf("%[^'\n]s",arr);

    iRet=countsmall(arr);

    printf("%d",iRet);

    return 0;
}
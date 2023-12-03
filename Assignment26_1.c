// write a program whcih accept string from useer and count number of capital character

#include<stdio.h>

int countcapital(char *str)
{
   int icnt=0;

    while(*str !='\0')
    {
    if((*str>='A') && (*str<='Z'))
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

    iRet=countcapital(arr);

    printf("%d",iRet);

    return 0;
}
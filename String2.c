#include<stdio.h>

int Calculatelength(char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}
int main()
{
    char Arr[40];
    int iRet = 0;

    printf("Enter your name :\n");
    scanf("%[^\n]s",Arr);

    printf("Your name is :%s\n",Arr);

    iRet=Calculatelength(Arr);

    printf("Length of string is :%d\n",iRet);

    return 0;
}
//Accept string from user and count character this string


#include<stdio.h>

int strlenx(char str[])
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
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
     scanf("%[^'\n']s",Arr);

    iRet=strlenx(Arr);

    printf("Length of string is :%d\n",iRet);

    return 0;
}
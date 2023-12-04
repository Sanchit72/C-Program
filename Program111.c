//Accept string from user and count  'a' character this string .129


#include<stdio.h>

int counta(char str[])
{
    int icnt = 0;

    while(*str == '\0')
    {
        if(*str=='a')
        {
        icnt++;
        }
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

    iRet= counta(Arr);

    printf(" count of a letter is :%d\n",iRet);

    return 0;
}
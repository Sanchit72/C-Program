// write a program which accept string from user and accept one character return index of first occurrence of that character


#include <stdio.h>

int firstchar(char *str, char ch)
{
    int index = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return index;
        }
    str++;
    index++;
}

    return -1;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cvalue = '\0';

    printf("Enter the string:\n");
    scanf("%[^\n]s", Arr);

    printf("Enter the character:\n");
    scanf(" %c", &cvalue);

    iRet = firstchar(Arr, cvalue);

    printf(" character location is %d\n", iRet);

    return 0;
}

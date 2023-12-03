//Problem Statement : write a program which accept string from user and accept one character return frequency of that character.


#include <stdio.h>

int countchar(char str[], char ch)
{
    int icnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
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
    char cvalue = '\0';

    printf("Enter the string:\n");
    scanf("%[^\n]s", Arr);

    printf("Enter the character:\n");
    scanf(" %c", &cvalue);

    iRet = countchar(Arr, cvalue);

    printf("Frequency of character %c: %d\n", cvalue, iRet);

    return 0;
}

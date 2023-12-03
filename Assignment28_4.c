// write a program which accept string from user and accept one character return index of last occurrence of that character


#include <stdio.h>

int firstchar(char *str, char ch)
{
    int index = -1;
    int icnt =0;

    for ( icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if (str[icnt] == ch)
        {
            index = icnt; 
        }
    }

    return index;
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

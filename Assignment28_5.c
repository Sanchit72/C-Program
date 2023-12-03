// write a program which accept string from user reverse that string in place#include<stdio.h>

void strrevx(char *str)
{
    int length = strlen(str);

    if (length <= 1)
    {
        return;
    }

    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n]s",arr);

    strrevx(arr);

    printf("Modified string %s",arr);

    return 0;
}
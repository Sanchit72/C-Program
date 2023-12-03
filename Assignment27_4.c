// write a program whcih accept string from useer and dispaly only digit from that string.

#include<stdio.h>

void DispalyDigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
    
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n]s",arr);

    DispalyDigit(arr);

    return 0;
}
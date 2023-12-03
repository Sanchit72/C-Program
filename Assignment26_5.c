// write a program which accept string from user and Dispaly it in reverse order

#include<stdio.h>

void Reverse(char *str)
{
   int length = 0;
   int icnt = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for ( icnt = length - 1; icnt >= 0; icnt--)
    {
        printf("%c", str[icnt]);
    }

}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string \n");
    scanf("%[^'\n]s",arr);

     Reverse(arr);

    return 0;
}
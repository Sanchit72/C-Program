//convert into small into capital

#include<stdio.h>

char convertcapital(char cvalue)
{
    return cvalue - 32;
}
int main()
{
   char ch ='\0';
   char cRet = '\0';

    printf("Enter the character :\n");
    scanf("%c",&ch);

    cRet = convertcapital(ch);

    printf("converted capital letter is :%c\n",cRet);

    return 0;
}
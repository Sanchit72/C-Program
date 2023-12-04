// convert capital into small

#include<stdio.h>

char convertsmall(char cvalue)
{
    return cvalue + 32;
}
int main()
{
   char ch ='\0';
   char cRet = '\0';

    printf("Enter the character :\n");
    scanf("%c",&ch);

    cRet = convertsmall(ch);

    printf("converted small letter is :%c\n",cRet);

    return 0;
}
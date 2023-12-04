// Problem Statement : 

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character :\n");
    scanf("%c",&ch);

    printf("ASCIT value of the character in DECIMAL is : %d\n",ch);
    printf("ASCIT value of the character in OCTAL is : %o\n",ch);
    printf("ASCIT value of the character in HEXADECIMAL is : %x\n",ch);

    return 0;
}

// Accept character from user and dispaly its ASCII value in decimal,octal and hexadecimal format.

#include<stdio.h>

void Dispaly(char ch)
{
    printf("ASCIT value of the character in DECIMAL is : %d\n",ch);
    printf("ASCIT value of the character in OCTAL is : %o\n",ch);
    printf("ASCIT value of the character in HEXADECIMAL is : %x\n",ch);

}
int main()
{
    char cvalue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cvalue);

    Dispaly(cvalue);

    return 0;
}

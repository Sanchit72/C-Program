
// Problem Statement :  Accept character from user and checkwhether it is small or not(a -z)

#include<stdio.h>
#include<stdbool.h>

bool checkDigit(char ch)
{
    if((ch>='a') && (ch<='z') )
    {
        return true;
    }
    else
    {
        return false;
    }
    }
int main()
{
    char cvalue = '\0';
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c",&cvalue);

    bRet = checkDigit(cvalue);

    if(bRet == true)
    {
        printf("It is small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }

    return 0;
}
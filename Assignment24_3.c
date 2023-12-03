
// Problem Statement :  Accept character from user and checkwhether it is Digit or not

#include<stdio.h>
#include<stdbool.h>

bool checkDigit(char ch)
{
    if((ch>='0') && (ch<='9') )
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
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}
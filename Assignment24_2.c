
// Problem Statement :  Accept character from user and checkwhether it is capital or not

#include<stdio.h>
#include<stdbool.h>

bool checkCapital(char ch)
{
    if((ch>='A') && (ch<='Z') )
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

    bRet = checkCapital(cvalue);

    if(bRet == true)
    {
        printf("It is Capital\n");
    }
    else
    {
        printf("It is not a Capital\n");
    }

    return 0;
}
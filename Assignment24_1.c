
// Problem Statement :  Accept character from user and checkwhether alphabet or not

#include<stdio.h>
#include<stdbool.h>

bool checkAlpha(char cvalue)
{
    if((cvalue>='A') && (cvalue<='Z') || (cvalue>='a') && (cvalue<='z'))
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c",&ch);

    bRet = checkAlpha(ch);

    if(bRet == true)
    {
        printf("It is character \n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}
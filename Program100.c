// Problem Statement :  Accept character from user and checkwhether capital or not

#include<stdio.h>
#include<stdbool.h>

bool checkcapital (char cvalue)
{
    if((cvalue>=65) && (cvalue<=90))
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

    bRet = checkcapital(ch);

    if(bRet == true)
    {
        printf("It is capital letter \n");
    }
    else
    {
        printf("It is not a capital letter\n");
    }

    return 0;
}
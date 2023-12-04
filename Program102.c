
// Problem Statement :  Accept character from user and checkwhether small or not

#include<stdio.h>
#include<stdbool.h>

bool checksmall (char cvalue)
{
    if((cvalue>='a') && (cvalue<='z'))
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

    bRet = checksmall(ch);

    if(bRet == true)
    {
        printf("It is small letter \n");
    }
    else
    {
        printf("It is not a small letter\n");
    }

    return 0;
}
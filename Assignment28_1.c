// write a program which accept string from user and accept one character check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>


bool chkchar(char *str,char ch)
{
    while (*str != '\0')
    {
    if(*str==ch)
    {
     return true;
    }
    str++;
    }
     return false;
    
}
int main()
{
    char Arr[20];
    char cvalue;
    bool bRet = false;

    printf("Enter a string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf("%c",&cvalue);

    bRet= chkchar(Arr,cvalue);

    if(bRet == true)
    {
        printf("chareacter found");
    }
    else
    {
        printf("Chareacter not found");
    }

    return 0;
}
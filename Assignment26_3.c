/* Problem Statement :write a program which accept string from user and return difference between frequency
  of small character and frquency of capital character
*/


#include<stdio.h>

int Difference(char *str)
{
    int icnt_lowercase= 0;
    int icnt_uppercase= 0;
    int count = 0;

    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
        icnt_lowercase++;
        }
        if(*str>='A' && *str<='Z')
        {
        icnt_uppercase++;
        }
        str++;

        count = icnt_lowercase - icnt_uppercase;
    }

    return count;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;
    char cvalue = '\0';

    printf("Enter the string :\n");
     scanf("%[^'\n']s",Arr);

    iRet=Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}
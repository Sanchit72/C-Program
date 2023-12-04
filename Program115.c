//Problem Statement : Accept string from user and check Digit character.

#include<stdio.h>
#include<stdbool.h>

int countdigit(char *str)
{
    int icnt=0;

    while(*str !='\0')
    {
    if((*str>='0') && (*str<='9'))
    {
     icnt++;
    }
    str++;
    }
    return icnt;
  }
    
int main()
{
    
    char Arr[20];
    int iRet=0;

    printf("Enter the character :\n");
    scanf("%[^'\n']s",Arr);


    iRet = countdigit(Arr);

   printf("Ferquency of digit is :%d\n",iRet);

    return 0;
}
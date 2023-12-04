//Problem Statement : Accept string from user and check capital character.

#include<stdio.h>
#include<stdbool.h>

int countcapital(char *str)
{
    int icnt=0;

    while(*str !='\0')
    {
    if((*str>='A') && (*str<='Z'))
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


    iRet = countcapital(Arr);

   printf("Ferquency of capital is :%d\n",iRet);

    return 0;
}
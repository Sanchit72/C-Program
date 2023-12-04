//Problem Statement : Accept string from user and check space character.

#include<stdio.h>

int countspace(char *str)
{
    int icnt=0;

    while(*str !='\0')
    {
    if(*str==' ')
    {
     icnt++;
    }
    str++;
    }
    return icnt;
  }
    
int main()
{
    
    char Arr[50];
    int iRet=0;

    printf("Enter the character :\n");
    scanf("%[^'\n']s",Arr);


    iRet = countspace(Arr);

   printf("Ferquency of space is :%d\n",iRet);

    return 0;
}
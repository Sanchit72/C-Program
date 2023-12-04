//Problem Statement : Accept string from user and check small character.

#include<stdio.h>
#include<stdbool.h>

int countsmall (char *str)
{
    int icnt=0;

    while(*str !='\0')
    {
    if((str>='a') && (str<='z'))
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


    iRet = countsmall(Arr);

   printf("Ferquency of small is :%d\n",iRet);

    return 0;
}
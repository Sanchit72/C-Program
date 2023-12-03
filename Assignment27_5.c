//Problem Statement : write a program which accept string from user and count number of white spaces

#include<stdio.h>

int countwhite(char *str)
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

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);


    iRet = countwhite(Arr);

   printf("%d\n",iRet);

    return 0;
}
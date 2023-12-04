//Problem Statement : Accept string from user and check space character.

#include<stdio.h>

void replace(char *str)
{

    while(*str !='\0')
    {
    if(*str=='a')
    {
     *str='_';
    }
    str++;
    }
    return;
  }
    
int main()
{
    
    char Arr[50];

    printf("Enter the character :\n");
    scanf("%[^'\n']s",Arr);


    replace(Arr);

   printf("updated string is :%s\n",Arr);

    return 0;
}
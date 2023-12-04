//Problem Statement : Accept string from user and count  vowels character.

#include<stdio.h>

int countvowels(char *str)
{
    int icnt=0;

    while(*str !='\0')
    {
    if((*str=='a' || *str=='e' || *str=='o' || *str=='i' || *str=='u'))
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


    iRet = countvowels(Arr);

   printf("Ferquency of vowels is :%d\n",iRet);

    return 0;
}
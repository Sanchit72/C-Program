//Problem Statement : Accept string from user and count character this string


#include<stdio.h>

int count(char str[],char ch)
{
    int icnt = 0;

    while(*str != '\0')
    {
        if(*str=='ch')
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
    int iRet = 0;
    char cvalue = '\0';

    printf("Enter the string :\n");
     scanf("%[^'\n']s",Arr);

     printf("Enter the character for frequency calcualte :\n");
     scanf(" %c",&cvalue);

    iRet=count(Arr,cvalue);

    printf("frequency of letter is :%d\n",iRet);

    return 0;
}
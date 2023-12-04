// Problem Statement : 


#include<stdio.h>

void Dispaly(char *str)
{
    printf("String is :%s\n",str);
}
int main()
{
    char Arr[20];

    printf("Enter the string :\n");
     scanf("%[^'\n']s",Arr);

    Dispaly(Arr);

    return 0;
}
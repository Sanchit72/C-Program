//input : 6
//output: a   b   c   d   e   f

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    char ch ='\0';

    for(icnt=1,ch='a';icnt<=iNo;icnt++,ch++)
    {
        printf("%c\t",ch);
    
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter the count  \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
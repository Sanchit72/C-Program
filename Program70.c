// Problem Statement : Accept number from user and Dispaly star from screen

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("*\t");
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
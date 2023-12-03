#include<stdio.h>

void Display(int iNo)
{
    auto int icnt=0;
    for(icnt=0;icnt<iNo;icnt++)
    {
        printf(" * ");
    }
} 


int main()
{
    auto int ivalue=0;

    printf("Enter the number : ");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
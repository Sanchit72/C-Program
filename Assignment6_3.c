#include<stdio.h>

void Display(int iNo)
{
    int icnt =0;

    for(icnt=iNo;icnt>=0;icnt--)
    {
        printf("%d\t",-icnt);
    }
    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number :");

    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
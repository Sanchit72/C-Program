#include<stdio.h>

void Table(int iNo)
{
    int icnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(icnt=1;icnt<=10;icnt++)
    {
       printf("%d\t",iNo*icnt);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    Table(ivalue);

    return 0;
}
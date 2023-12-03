#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int icnt =0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt*iNo);
    
    }
}

int main()
{
    int ivalue=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    MultipleDisplay(ivalue);

    return 0;
}
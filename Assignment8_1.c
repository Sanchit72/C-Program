#include<stdio.h>

void Display(int iNo)
{
    int icnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("  * ");
        
    }
    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("  # ");
        
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
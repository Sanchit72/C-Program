#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\t",icnt);
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
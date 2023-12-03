#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int icnt=0;

    for(icnt=0;icnt<iFrequency;icnt++)
    {
        printf(" %d ",iNo);
    }
}

int main()
{
    int ivalue=0;
    int iCount=0;

    printf("Enter a Number :");
    scanf("%d",&ivalue);

    printf("Enter a Frequency :");
    scanf("%d",&iCount);

    Display(ivalue,iCount);

    return 0;
}
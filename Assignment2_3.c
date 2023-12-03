#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    auto int ivalue=0;

    printf("Enter the Number :");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
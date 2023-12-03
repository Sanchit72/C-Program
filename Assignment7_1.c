#include<stdio.h>

void Number(int iNo)
{
    if(iNo<=50)
    {
        printf("small");
    }
    else if(iNo<=100)
    {
        printf("Medium");
    }
    else
    {
        printf("large");
    }
}
int main()
{
    int ivalue =0;
    
    printf("Enter number");
    scanf("%d",&ivalue);

    Number(ivalue);

    return 0;
}
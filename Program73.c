// 4
//-4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt=-iNo;icnt<=iNo;icnt++)
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
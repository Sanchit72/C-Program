//input : 4
//output: 4 3 2 1

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt=iNo;icnt>=1;icnt--)
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
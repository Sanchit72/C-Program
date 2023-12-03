// Write a program which accept one number from user and print that number of even number on screen

#include<stdio.h>

int printEven(int iNo)
{
    int icnt=0;

    if(iNo<=0)
    {
        return -1;
    }
    for(icnt=1;icnt<=(iNo*2);icnt++)    
    {
        if(icnt % 2 == 0)
        {
            printf("%d ",icnt);
        }
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number\n");
    scanf("%d",&ivalue);

    printEven(ivalue);

    return 0;
}
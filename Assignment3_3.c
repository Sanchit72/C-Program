//Write a program  which accept number from user and print even factor of that number

#include<stdio.h>

void DispalyEvenFactor(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    for(i = 1;i <= (iNo / 2) ;i++)
    {
        if( i % 2 == 0 && iNo % i==  0 ) 
        {
           printf("%d\t",i);
    }
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number \n");
    scanf("%d",&ivalue);

    DispalyEvenFactor(ivalue);

    return 0;
}
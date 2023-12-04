//Problem Statement : Accept number from user and print numeric value upto number decrement  
#include<stdio.h>

void Disaply(int iNo)
{
    int icnt=0;

    for(icnt=iNo;icnt>=1;icnt--)
    {
       printf("%d\n",icnt);
    }
    
}
int main()
{
    int ivalue=0;
     printf("Enter  number of times you want to display on screen \n");
     scanf("%d",&ivalue);

     Disaply(ivalue);

    return 0;
}
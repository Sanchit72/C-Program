//Problem Statement : Accept number from user and print STAR 
#include<stdio.h>

void Disaply(int iNo)
{
    int icnt=0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
       printf("*\n",icnt);       // \t = tab
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
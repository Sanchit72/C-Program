// Problem Statement :Dispaly six time star

#include<stdio.h>

void Dispaly(int iNo)
{
    int icnt = 0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("*\t");
    }
    printf("\n");

}
int main()
{
    int ivalue = 6;

    Dispaly(ivalue);

    return 0;
}
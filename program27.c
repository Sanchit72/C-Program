//problem statement : Dispaly hello on screen five time use for loop
#include<stdio.h>

void Dispaly()
{
    int icnt=0;

    for(icnt=1;icnt<=5;icnt++)
    {
        printf("Hello %d \n",icnt);
    }
}
int main()
{

    Dispaly();

    return 0;
}
#include<stdio.h>

void OddDisplay(int iNo)
{
   int icnt = 0;

   for(icnt=0;icnt<=iNo;icnt++)
   {
    if(icnt % 2 != 0)
    {
        printf("%d\t",icnt);
    }
   }
}
int main()
{
    int ivalue =0;

    printf("Enter number");
    scanf("%d",&ivalue);

    OddDisplay(ivalue);

    return 0;
}
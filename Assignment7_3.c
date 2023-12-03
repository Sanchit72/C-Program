#include<stdio.h>

int Factorial(int iNo)
{

    int icnt=0;
    int imul = 1;

    if (iNo < 0) 
    {
        iNo=-iNo; 
    }
    if (iNo == 0)
     {
        return 1; 
    }
    else {
        for (int icnt = 1; icnt <= iNo; icnt++)
         {
            imul *= icnt;
        }
        return imul;
    }
}



int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=Factorial(ivalue);

    printf("Factorial of number is %d",iRet);

    return 0;
}
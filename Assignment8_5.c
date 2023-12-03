#include<stdio.h>

int FactorialDiff(int iNo)
{
    int icnt=0;
    int Evenfact=1;
    int Oddfact=1;
    int Ans=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }   

    for(icnt=1;icnt<=iNo;icnt++)
    {
        if(icnt%2==0)
        {
            Evenfact=Evenfact*icnt;
        }
        else
        {
            Oddfact=Oddfact*icnt;
        }
    }
    Ans=Evenfact-Oddfact;
    return Ans;
}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = FactorialDiff(ivalue);

    printf("Factorial difference is %d",iRet);
}
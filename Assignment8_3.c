#include<stdio.h>

int EvenFactorial(int iNo)
{
    int icnt=0;
    int Fact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(icnt = 1;icnt <= iNo;icnt++)
    {
        
            if(icnt % 2 ==0)
            {
                Fact=Fact*icnt;
            }
        
    }
    return Fact;

}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = EvenFactorial(ivalue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}
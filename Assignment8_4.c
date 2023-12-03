#include<stdio.h>

int OddFactorial(int iNo)
{
    int icnt=0;
    int imul=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(icnt=1;icnt <= iNo;icnt++)
    {
       
            if(icnt % 2 != 0)
            {
                imul = imul * icnt;
            }
        }
    
    return imul;

}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = OddFactorial(ivalue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}
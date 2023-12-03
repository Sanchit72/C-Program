#include<stdio.h>
int SumNonFact(int iNo)
{
    int icnt=0;
    int isum=0;

    for(icnt=1 ;icnt <= (iNo) ;icnt++)
    {
        if(iNo % icnt!=0)
        {
            isum = isum + icnt;
        }
    }
     return isum;
    
}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=SumNonFact(ivalue);

    printf("%d",iRet);

    return 0;


}
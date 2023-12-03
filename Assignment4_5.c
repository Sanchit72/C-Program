#include<stdio.h>

int FactDiff(int iNo)
{
    int icnt=0;
    int isum=0;
    int isum1=0;

    for(icnt=1;icnt<iNo;icnt++)
    {
        if(iNo % icnt ==0)
        {
           isum=isum+icnt;
        }
        if(iNo % icnt !=0)
        {
           isum1=isum1+icnt;
        }
    }
    return isum-isum1;

}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    iRet=FactDiff(ivalue);

    printf("%d",iRet);

    return 0;
}
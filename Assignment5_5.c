#include<stdio.h>

float Percentage(int itotal,int imarks)
{
    float Ans = 0.0;
     
    Ans=(((float)imarks/(float)itotal)*100);
    return Ans;
}

int main()
{
    int ivalue1=0,ivalue2=0;
    float fRet=0.0;

    printf("Enter total marks :");
    scanf("%d",&ivalue1);

    printf("Enter obtained marks :");
    scanf("%d",&ivalue2);

    fRet = Percentage(ivalue1,ivalue2);

    printf("percentage : %f",fRet);

    return 0;
}
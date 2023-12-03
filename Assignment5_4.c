#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int Ans = 0;

    Ans = iNo1*iNo2*iNo3;

    return Ans;

}

int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0,iRet=0;

    printf("please enter three number :");
    
    scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

    iRet = Multiply(ivalue1,ivalue2,ivalue3);

    printf("Multiplicatis is %d",iRet);

    return 0;


}
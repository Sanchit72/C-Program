#include<stdio.h>

int DollarToINR(int iNo)
{
    int Ans=0;
    int imul=70;

    Ans = imul*iNo;
  
    return Ans;
}
int main()
{
    int ivalue=0,iRet=0;

    printf("Enter number of USD");
    scanf("%d",&ivalue);

    iRet=DollarToINR(ivalue);

    printf("value in INR is %d",iRet);

    return 0;


}

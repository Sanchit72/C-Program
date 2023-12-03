//Write a program which accept area in square feet and convert it into square meter.
//(1 square feet=0.0929 square meter)

#include<stdio.h>

double SquareMeter(int isquare)
{
    float Ans=0.0;
    float feet=0.0929;

    Ans=isquare*feet;


    return Ans;

}
int main()
{
    int ivalue = 0;
    double dRet= 0.0;

    printf("Enter area in square feet");
    scanf("%d",&ivalue);

    dRet=SquareMeter(ivalue);

    printf("%f square meter",dRet);

    return 0;
}
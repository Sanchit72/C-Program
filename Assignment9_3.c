//Write a program which accept distance in Kilometer and convert it into meter.
//(1 Kilometer = 1000 meter)

#include<stdio.h>

int KmtoMeter(int iNo)
{
    int Ans=0;
    int ikm=1000;

    Ans=iNo*ikm;

    return Ans; 

}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter distance");
    scanf("%d",&ivalue);

    iRet = KmtoMeter(ivalue);

    printf("%d meter",iRet);

    return 0;
}
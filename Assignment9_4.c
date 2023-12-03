//Write a program which accept temperature in fahrenheit and convert it into celsius
//(1 celsius =(fahrenheit-32)*5/9)

#include<stdio.h>

double Fhtocs(float ftemp)
{
    float Ans=0.0;
    
    Ans=((ftemp-32)* 5/9);

    return Ans;
}

int main()
{
    float fvalue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fvalue);

    dRet = Fhtocs(fvalue);

    printf("%f",dRet);

    return 0;
}
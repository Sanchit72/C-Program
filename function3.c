#include<stdio.h>
int Addition(int NO1, int NO2)
{
    int sum=0;
    sum = NO1 + NO2;
    return sum;
}
int main()
{
 int Value1 = 10;
 int Value2 = 11;
int Ans = 0;
 Ans = Addition(Value1,Value2);
printf("Addition is:%d\n",Ans);
return 0;
}

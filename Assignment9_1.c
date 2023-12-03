//Problem Statement : Write a program which accept radius of circle from user and calculate its area.
// consider value of PI as 3.14(Area=PI* radius*radius)


#include<stdio.h>

double CircleArea(float fRadius)
{
    double Ans=0.0;
     const float PI=3.14;

     Ans=PI*fRadius*fRadius;

     return Ans;
}

int main()
{
    float fvalue=0.0;
    double dRet=0.0;

    printf("Enter radius :");
    scanf("%f",&fvalue);

    dRet = CircleArea(fvalue);

    printf("Area of circle %f",dRet);
}
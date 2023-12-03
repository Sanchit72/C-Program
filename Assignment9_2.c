//Write a program which accept width and height of rectangle from user and clculate area.
//(Area=Width*Height)


#include<stdio.h>

double RectArea(float fwidth,float fheight)
{
    double Area=0.0;

    Area=fwidth*fheight;

    return Area;
}
int main()
{
    float fvalue1=0.0,fvalue2=0.0;
    double dRet=0.0;

    printf("Enter width:");
    scanf("%f",&fvalue1);

    printf("Enter height:");
    scanf("%f",&fvalue2);

    dRet = RectArea(fvalue1,fvalue2);

    printf("area of rectangle %f",dRet);

    return 0;
}
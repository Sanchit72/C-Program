// Problem Satement :

#include<stdio.h>

int  CountDigit(int iNo)
{
    int icnt = 0;

    while(iNo > 0)
    {
        iNo=iNo/10;
        icnt++;
    }
    return icnt;

}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

   iRet=CountDigit(ivalue);

   printf("Number of digit are :%d\n",iRet);

    return 0;
}
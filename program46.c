// Problem Satement :

#include<stdio.h>

int  CountDigit(int iNo)
{
    int isum =0;

    while(iNo > 0)
    {
        isum=isum+(iNo%10);
        iNo=iNo/10;
        
    }
    return isum;

}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

   iRet=CountDigit(ivalue);

   printf("sum of digit are :%d\n",iRet);

    return 0;
}
//Problem Statement :  Write a program which accept number from user and return the count of odd digit


#include<stdio.h>

int countOdd(int iNo)
{
    int iDigit = 0;
    int icount = 0;
     
     while(iNo!=0)
     {
    iDigit = iNo % 10;
    iNo = iNo/10;

    if(iDigit % 2 != 0)
    {
        icount++;
    }
     }
    return icount;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = countOdd(ivalue);

    printf("%d",iRet);


    return 0;
}
//Problem Statement : Write a program which accept number from user and return differance between summation of even 
//digit and summation of odd digit

#include<stdio.h>

int countdiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iodd = 0;
    int iSum = 0 ;

    while(iNo!=0)
    {
        iDigit = iNo %10;
        iNo = iNo /10 ;

        if(iDigit % 2 == 0 )
        {
            iEven = iEven - iDigit;
        }
        else if(iDigit % 2 !=0)
        {
            iodd = iodd - iDigit;
        }
        
        iSum = iodd - iEven ;
    }
        return iSum;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&ivalue);

    iRet = countdiff(ivalue);

    printf("%d",iRet);

    return 0;
}
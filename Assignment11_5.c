//Problem Statement : Write a pprogram which accept number from user and count frequency of such a digit which are less than 6


#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int icount = 0;

    while(iNo>0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;

        if(iDigit<6)
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

    iRet = Count(ivalue);

    printf("%d",iRet);

    return 0;
}
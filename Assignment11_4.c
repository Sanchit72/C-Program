//Problem Statement : Write a program which accept number from user and count frequency of 4 in it

#include<stdio.h>

int Countfour(int iNo)
{
    int iDigit = 0;
    int icount = 0;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        if(iDigit==4)
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

    iRet = Countfour(ivalue);

    printf("%d",iRet);

    return 0;
}
//Problem Statement :  Write a program which accept number from user and Check whether it contains 0 in it or not


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo>0)
    {
    iDigit=iNo%10;
    iNo=iNo/10;

    if(iDigit==0)
    {
        return TRUE;
    }  
    } 
    return FALSE;
    
}
int main()
{
    int ivalue1 = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&ivalue1);

    bRet=ChkZero(ivalue1);

    if(bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
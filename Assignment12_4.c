//Problem Statement : Write a program which accept number from user and return multiplication of all digit

#include<stdio.h>

int countOdd(int iNo)
{
    int iDigit = 0;
    int imul = 1;
     
     while(iNo!=0)
     {
    iDigit = iNo % 10;
    iNo = iNo/10;

    imul = imul*iDigit;
     }

    return imul;
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
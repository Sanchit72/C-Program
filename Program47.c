#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = iRev * 10 + iDigit;
    }
    return iRev;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    iRet = Reverse(ivalue);

    printf("Reverse number is :%d",iRet);


    return 0;
}
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt=0;   //i

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf(" * ");
    }
}
int main()
{
    int ivalue=0;
    ivalue = 5;

    Accept(ivalue);

    return 0;
}
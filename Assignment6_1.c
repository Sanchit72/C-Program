#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;   

     if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf(" $  * ");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter a number");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}
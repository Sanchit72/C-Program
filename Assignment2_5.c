#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNO)
{
    if(iNO%2==0)
    {
         return TRUE;
    }
    else
    {
       return  FALSE;
    }
}

int main()
{
    int ivalue=0;
    BOOL  bRet =FALSE;

    printf("Enter a Number :");
    scanf("%d",&ivalue);

    bRet=ChkEven(ivalue);
    
    if(bRet==TRUE)
    {
        printf("%d is even number",ivalue);
    }
    else
    {
        printf("%d is odd number",ivalue);
    }
    return 0;
}
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo >= 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int ivalue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number :");
    scanf("%d",&ivalue);

    bRet=ChkGreater(ivalue);

    if(bRet==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
}
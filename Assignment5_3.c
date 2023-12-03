#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)

{
    if(iNo1 == iNo2)
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
    int ivalue1=0, ivalue2=0;
    BOOL bRet = FALSE;

    printf("please entar two number :");
    
    scanf("%d%d",&ivalue1,&ivalue2);

    bRet = ChkEqual(ivalue1,ivalue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    
    return 0;
}
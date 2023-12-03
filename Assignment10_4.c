// Problem Statement :Write a program which accept range from user and return addition of all Even number in between that range

#include<stdio.h>

int RangesumEven(int iStart,int iEnd)
{
    int icnt=0;
    int isum=0;
     if(iStart>iEnd)
        {
         printf("Invalid range\n");
        }

    for(icnt=iStart;icnt<=iEnd;icnt++) 
    { 
        if(icnt%2==0)
        { 
        isum+=icnt;
        }
    
    }
    return isum;
}

int main()
{
    int ivalue1=0,ivalue2=0;
    int iRet=0;

    printf("Enter starting point");
    scanf("%d",&ivalue1);

    printf("Enter ending point");
    scanf("%d",&ivalue2);

    iRet=RangesumEven(ivalue1,ivalue2);

    printf("Addition is %d",iRet);

    return 0;
}
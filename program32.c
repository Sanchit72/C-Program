// Problem statement : Accept number from user and checkfactor

#include<stdio.h>
#include<stdbool.h>

bool checkfactor(int iNo1,int iNo2)
{
    if((iNo1%iNo2)==0)
    {
        return true;
    }
    else
    {
    return false;
    }
}

int main()
{

    int ivalue1=0;
    int ivalue2=0;
    bool bRet=0;

    printf("Enter first number :\n");
    scanf("%d",&ivalue1);

    printf("Enter second number :\n");
    scanf("%d",&ivalue2);

     bRet=checkfactor(ivalue1,ivalue2);
    
    if(bRet=true)
    {
        printf("%d is a factor of %d\n",ivalue2,ivalue1);
    }
    else
    {
        printf("%d is not a factor of %d\n",ivalue2,ivalue1);
    }
    
    return 0;
}
// Problem Statement :Write a program which accept range from user and return addition of all number in between that range

#include<stdio.h>

int Rangesum(int iStart,int iEnd)
{
    int icnt=0;
    int isum=0;
   
   if(iStart>iEnd)
   {
    printf("Invalid range");
   }
   
   for(icnt=iStart;icnt<=iEnd;icnt++)
   {
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

    iRet=Rangesum(ivalue1,ivalue2);

    printf("Addition is %d",iRet);

    return 0;
}
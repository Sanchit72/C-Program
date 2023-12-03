// Problem Statement : Write a program which accept range from user and dispaly all even number in between that range


#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int icnt=0;
    
    for(icnt=iStart;icnt<=iEnd;icnt++)
    {
          if(icnt%2==0)
          {
            printf("%d\t",icnt);
          }
    }
    
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter starting point");
    scanf("%d",&ivalue1);

    printf("Enter ending point");
    scanf("%d",&ivalue2);

    RangeDisplayEven(ivalue1,ivalue2);

    return 0;
}
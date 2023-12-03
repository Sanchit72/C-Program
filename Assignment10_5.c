
//Problem Statement : Write a program which accept range from user and display all number in between that range



#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int icnt=0;
     if(iStart>iEnd)
        {
            printf("Invalid range");
        }
    
    for(icnt=iEnd;icnt>=iStart;icnt--)
    {
          printf("%d\t",icnt);
    }
    
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter starting point");
    scanf("%d",&ivalue1);

    printf("Enter ending point");
    scanf("%d",&ivalue2);

    RangeDisplayRev(ivalue1,ivalue2);

    return 0;
}
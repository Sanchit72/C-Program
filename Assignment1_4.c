#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo%5)==0)
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
  int ivalue=0;
  BOOL bRet=FALSE;

  printf("Enter Number :");
  scanf("%d",&ivalue);

  bRet=Check(ivalue);

  if(bRet==TRUE)
  {
    printf("Divisible by 5 ");
  }
  else
  {
    printf("Not Divisible by 5 ");
  }

  return 0;
}
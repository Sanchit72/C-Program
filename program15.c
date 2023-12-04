#include<stdio.h>

void DisplayExamTime(int istandard)
{
    if(istandard==1)
    {
        printf("your exam at 8 AM \n");
    }
    else if(istandard==2)
    {
       printf("your exam at 9 AM \n");
    }
    else if(istandard==3)
    {
      printf("your exam at 10 AM \n");
    }
        else if(istandard==4)
    {
        printf("your exam at 11 AM \n");
    }    else if(istandard==5)
    {
        printf("your exam at 12 AM \n");
    }
}
int main()
{
    auto int ivalue=0;

    printf("Enter your standard :\n");
    scanf("%d",&ivalue);

     DisplayExamTime(ivalue);
    return 0;
}
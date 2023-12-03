//Problem Statement : Accept n number from user and Dispaly summmation of digits of each number. 

#include<stdio.h>
#include<stdlib.h>

int CalculateDigitSum(int inum)
{
     int icnt=0;
     int isum=0;

      while(inum>0)
      {
        isum=isum+(inum%10);
        inum=inum/10;
      }
    return isum;
}
int main()
{
    int isize=0,icnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter a number of element \n");
    scanf("%d",&isize);

    ptr=(int *)malloc(isize *sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element",isize);

    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter element %d :",icnt+1);
        scanf("%d",&ptr[icnt]);
    }
    printf("Summation of digits for each number:\n");

    for (icnt = 0; icnt < isize; icnt++) 
    {
      int iRet = CalculateDigitSum(ptr[icnt]);

       printf("Number :%d, Sum of digits: %d\n", ptr[icnt], iRet);
    }
  

    free(ptr);

    return 0;


}
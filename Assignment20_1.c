/*Problem Statement : Accept number of rows and number of columns from user and dispaly below pattern.
 Input : iRow 4  icol 4
 Output :
1   2   3   4
5   6   7   8   
9   1   2   3   
4   5   6   7
*/ 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int icnt =1;
    int icnt1=0;
    int icnt2=0;

    for(icnt1=1;icnt1<=iRow;icnt1++)
    {
        
       for(icnt2=1;icnt2<=iCol;icnt2++)
       {
         printf("%d\t",icnt);
         icnt++;
         if(icnt>9)
         {
            icnt=1;
         }
       }
       printf("\n");
      
    }
     

}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("Enetr number of rows:");
    scanf("%d",&ivalue1);

     printf("Enetr number of columns:");
     scanf("%d",&ivalue2);

    Pattern(ivalue1,ivalue2);

    return 0;
}
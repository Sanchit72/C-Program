/*Problem Statement : Accept number of rows and number of columns from user and dispaly below pattern.
 Input : iRow 4  icol 4
 Output :
4   4   4   4   4
3   3   3   3   3
2   2   2   2   2
1   1   1   1   1
*/ 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int icnt1=0;
    int icnt2=0;
    char ch ='A';

    for(icnt1=iRow;icnt1>=1;icnt1--)
    {
        
       for(icnt2=1;icnt2<=iCol;icnt2++)
       {
         printf("%d\t",icnt1);
       }
       printf("\n");
       ch++;
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
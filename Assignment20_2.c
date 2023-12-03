/*Problem Statement : Accept number of rows and number of columns from user and dispaly below pattern.
 Input : iRow 4  icol 4
 Output :
2   4   6   8   10
1   3   5   7   9
2   4   6   8   10
1   3   5   7   9
*/ 

#include<stdio.h>



#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    for (int icnt1 = 1; icnt1 <= iRow; icnt1++)
     {
        if (icnt1 % 2 == 0)
         {
            for (int icnt2 = 2; icnt2 <= iCol * 2; icnt2 += 2)
             {
                printf("%d\t", icnt2);
            }
        }
         else 
         {
            for (int icnt2 = 1; icnt2 <= iCol * 2; icnt2 += 2) 
            {
                printf("%d\t", icnt2);
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
    
       
    
     


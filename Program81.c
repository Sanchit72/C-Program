/*input : Accept number rows and colums  from user and Disaply pattern
output :
*   *  *   *
*   *  *   *
*   *  *   *
*/
#include<stdio.h>

void Dispaly(int iRow,int iCol)
{
    int i =0;
    int j =0;

    for(i=1;i<=iRow;i++)
    {
    for(j=1;j<=iCol;j++)
    {
        printf("*\t");
    }
    printf("\n\n");
    }
}
int main()
{
    int iNo1=0, iNo2=0;
     
     printf("Enter number of rows :\n");
     scanf("%d",&iNo1);

     printf("Enter number of columns :\n");
     scanf("%d",&iNo2);

     Dispaly(iNo1,iNo2);

    return 0;
}
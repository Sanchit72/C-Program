/* Proble Statement : Accept number from user and Dispaly pattern
Input :5
Outout :1   *   2   *   3   *   4   *   5   *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("%d\t*\t",icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number of element");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}
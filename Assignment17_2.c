/* Proble Statement : Accept number from user and Dispaly pattern
Input :5
Outout : 5  #   4   #   3   #   2   #   1   #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=iNo;icnt>=1;icnt--)
    {
        printf("%d\t#\t",icnt);
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
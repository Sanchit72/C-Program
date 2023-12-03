/* Proble Statement : Accept number from user and Dispaly pattern
Input :8
Outout :2   4   6   8   10  12  14  16
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int icnt=0;

    for(icnt=1;icnt<=iNo*2;icnt++)
    {
        if(icnt%2==0)
        {
        printf("%d\t",icnt);
        }
        
    }
}
int main()
{
    int ivalue=0;

    printf("Enter number of element\n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return 0;
}
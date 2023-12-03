/* Proble Statement : Accept number from user and Dispaly pattern
Input :5
Outout : A  B   C   D   E
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int icnt=0;
    char ch ='A';

    for(icnt=1;icnt<=iNo;icnt++,ch++)
    {
        printf("%c\t",ch);
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
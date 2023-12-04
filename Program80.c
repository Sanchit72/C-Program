/*input :
output :
*   *  *   *
*   *  *   *
*   *  *   *
*/
#include<stdio.h>

void Dispaly()
{
    int i =0;
    int j =0;

    for(i=1;i<=3;i++)
    {
    for(j=1;j<=4;j++)
    {
        printf("*\t");
    }
    printf("\n");
    }
}
int main()
{
     
     Dispaly();

    return 0;
}
#include<stdio.h>
int main()
{
    int no=21;
    int *p=&no;
    int *a=&no;
    int **q=&p;
    int **b=&p;
    int ***r=&q;
    int ****x=&r;
    int *****y=&x;
    printf("%d\n",&no);
    printf("%d\n",&p);
    printf("%d\n",&q);
    printf("%d\n",&r);
    printf("%d\n",&x);
   
    return 0;
}
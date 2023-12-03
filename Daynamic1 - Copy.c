#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Arr[5];
    float fvalue;
    double Brr[4];

    int isize=0;
    int *ptr=NULL;

    printf("Enter the size of Array :\n");
    scanf("%d",&isize);
    
    ptr=(int *)malloc(isize * sizeof(int));
    ptr[0]=10;
    ptr[1]=11;
    ptr[2]=12;

    free(ptr);
    return 0;

}
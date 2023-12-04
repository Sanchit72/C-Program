#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int isize)
{
    int icnt = 0;

    printf("Element of the array are :\n");
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("%d\t",Arr[icnt]);
    }
    printf("\n");

}
int main()
{
    int icount = 0;
    int *ptr = NULL;
    int icnt = 0;

    printf("Enter the number of element that you want to enter :\n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount *sizeof(int));

    printf("Enter the values :\n");
    for(icnt = 0;icnt <icount;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    Display(ptr,icount);

     free(ptr);
     
    return 0;
}

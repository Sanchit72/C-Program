#include<stdio.h>    //for printf and scanf
#include<stdlib.h>  //for malloc and free

int main()
{
    int iCount = 0;
    int icnt = 0;
    int *ptr = NULL;

    printf("Enter the number of element :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the element :\n");

    for(icnt=0;icnt<iCount;icnt++)
    {
    scanf("%d",&ptr[icnt]);
    }
    

    return 0;
}
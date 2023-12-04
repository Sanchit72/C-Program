#include<stdio.h>    //for printf and scanf
#include<stdlib.h>  //for malloc and free

void Display(int Arr[], int isize)
{
    int icnt = 0;

    for(icnt=0;icnt<isize;icnt++)
    {
        printf("%d\t",Arr[icnt]);
    }
    printf("\n");

}

int main()
{
    int iCount = 0;
    int icnt = 0;
    int *ptr = NULL;

    printf("Enter the number of element :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the element :\n");
          //1      2         3
    for(icnt=0;icnt<iCount;icnt++)
    {               //4
    scanf("%d",&ptr[icnt]);
    }
    
    Display(ptr,iCount);

    return 0;
}
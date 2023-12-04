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
          //1      2         3
    for(icnt=0;icnt<iCount;icnt++)
    {               //4
    scanf("%d",&ptr[icnt]);
    }
    
    printf("Your entred element are :\n ");
        //1        2          3
    for(icnt=0;icnt<iCount;icnt++)
    {                 //4      
    printf("%d\t",ptr[icnt]);
    }
    printf("\n");
    return 0;
}
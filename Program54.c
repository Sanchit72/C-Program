#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int isize)       //(100,4)
{
    int icnt = 0;

    printf("\nElement of the array are :\n");
    //     1      2         3
    for(icnt=0;icnt<isize;icnt++)
    {
        printf("%d\t",Arr[icnt]);   //4
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

    printf("Dynamic memory gets allocated succesfully for %d element \n",icount);
    printf("Enter the %d values :\n",icount);
    //     1          2         3
    for(icnt = 0;icnt <icount;icnt++)       // O(N) time complexcity
    {
        printf("\n Enter the element no %d :",icnt+1);
        scanf("%d",&ptr[icnt]);   //4
    }

    Display(ptr,icount);        //Display(100,4)

     free(ptr);     //free(100)
     printf("Dynamic memory gets deallocate succesfully ..\n");
     
    return 0;
}

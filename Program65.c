//Problem statement : Accept number from user and Dispaly smallest and largest element of that number


#include<stdio.h>
#include<stdlib.h>

void maxmin(int Arr[],int isize)
{
    int icnt = 0;
    int imax = Arr[0];
    int imin = Arr[0];
    

    for(icnt =0;icnt<isize;icnt++)
    {
        if(Arr[icnt] > imax)
        {
            imax = Arr[icnt];
        }
        if(Arr[icnt] < imin)
        {
            imin = Arr[icnt];
        }
    }
    printf("maximum element is :%d\n",imax);
    printf("minimum element is :%d\n",imin);
}
int main()
{
    int icount =0;
    int *ptr= NULL;
    int icnt=0;
    

    printf("Enter number of element that you want to enter : \n");
    scanf("%d",&icount);

    ptr=(int *)malloc(icount *sizeof(int));
    printf("Dynamicly memory gets allocated succesfully \n");

    printf("Enter the element :\n");
    for(icnt=0;icnt<icount;icnt++)
    {
        printf("\nEnter element no %d :",icnt+1);
        scanf("%d",&ptr[icnt]);
    }

     maxmin(ptr,icount);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully..\n");


    return 0;
}
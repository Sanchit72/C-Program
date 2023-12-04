//Problem statement : Accept number from user and return smallest element of that number


#include<stdio.h>
#include<stdlib.h>

int minimum(int Arr[],int isize)
{
    int icnt = 0;
    int imin = Arr[0];

    for(icnt =0;icnt<isize;icnt++)
    {
        if(Arr[icnt] < imin)
        {
            imin = Arr[icnt];
        }
    }
    return imin;
}
int main()
{
    int icount =0;
    int *ptr= NULL;
    int icnt=0;
    int iRet =0;

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

    iRet = minimum(ptr,icount);

    printf("minimum element  is %d \n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully..\n");


    return 0;
}
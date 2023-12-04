//Problem statement : Accept number from user and Dispaly Avarage of element

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int isize)
{
    int icnt =0;
    int isum =0;
    float fAverage = 0.0f;

    for(icnt=0;icnt<isize;icnt++)
    {
        isum = isum+Arr[icnt];
    }
    fAverage = ((float)isum/(float)isize);

    return fAverage;

}
int main()
{
    int icount =0;
    int *ptr= NULL;
    int icnt=0;
    float fRet =0;

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

    fRet = Average(ptr,icount);

    printf("Avarge is %f \n",fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully..\n");


    return 0;
}
// Problrm Statement : Accept number from user and frequency of that number


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int isize,int iNo)
{
    int icnt = 0;
    int iFrequency =0 ;
    
    for(icnt =0;icnt<isize;icnt++)
    {
        if(Arr[icnt]==21)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int icount =0;
    int *ptr= NULL;
    int icnt=0;
    int iRet = 0;
    int ivalue =0;
    

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

    printf("Enter a element that you want to search :\n");
    scanf("%d",&ivalue);

    iRet =Frequency(ptr,icount,ivalue);

    printf("%d occurs %d times \n",ivalue,iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully..\n");


    return 0;
}
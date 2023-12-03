// Problem Statement : Accept N Number from user and return differance between summation of even element and odd element

#include<stdio.h>
#include<stdlib.h>

int Differance(int Arr[],int iLenght)
{
    int icnt = 0;
    int iEven =0;
    int iodd = 0;
    int isum = 0 ;

    for(icnt=0;icnt<iLenght;icnt++)
    {      
        if((Arr[icnt] % 2) ==0)
        {
          iEven = iEven+Arr[icnt];  
          }  //4
    }
    for(icnt=0;icnt<iLenght;icnt++)
    {      
        if((Arr[icnt] % 2) !=0)
        {
          iodd = iodd+Arr[icnt];  
        } 
    
        isum = iEven - iodd;
    }
    return isum;
}
int main()
{
    int isize = 0,iRet= 0,icnt = 0;
    int *ptr = NULL; 


    printf("Enter number of element \n");
    scanf("%d",&isize);

    ptr=(int *)malloc(isize *sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d element \n ",isize);

    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter element %d: ",icnt+1);
        scanf("%d",&ptr[icnt]);
    }

    iRet = Differance(ptr,isize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;

}
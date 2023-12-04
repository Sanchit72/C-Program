// Problem Statement : Accept n number from user and Disaply  Addition all element

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int isize)       //(100,4)
{
    int icnt = 0;
    int isum = 0;
    
    //     1      2         3
    for(icnt=0;icnt<isize;icnt++)
    {      
        
          isum = isum+Arr[icnt];  //4
    }
    return isum;
    
}
int main()
{
    int icount = 0;
    int iRet = 0;
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

     iRet=Addition(ptr,icount);        //Display(100,4)

     printf("Addition of all element are :%d\n",iRet);

     free(ptr);     //free(100)
     printf("Dynamic memory gets deallocate succesfully ..\n");
     
    return 0;
}

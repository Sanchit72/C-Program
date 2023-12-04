// Problem Statement : Accept n number from user and Disaply even number  and count that number

#include<stdio.h>
#include<stdlib.h>

int EvenDisplay(int Arr[],int isize)       //(100,4)
{
    int icnt = 0;
    int iEvenicnt = 0;
    
    //     1      2         3
    for(icnt=0;icnt<isize;icnt++)
    {
        if(Arr[icnt] % 2 ==0)
        {
       iEvenicnt++;
        }
        
        
    }
    return iEvenicnt;
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

     iRet=EvenDisplay(ptr,icount);        //Display(100,4)

     printf("Number of even element are :%d\n",iRet);

     free(ptr);     //free(100)
     printf("Dynamic memory gets deallocate succesfully ..\n");
     
    return 0;
}

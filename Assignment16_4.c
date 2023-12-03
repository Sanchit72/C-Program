//Problem Statement : Accept n number from user and Dispaly all such number which contains 3 digit in it. 

#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[],int iLength)
{
     int icnt=0;

     for(icnt=0;icnt<iLength;icnt++)
     {
        if(Arr[icnt]>=100 && Arr[icnt]<=999)
        {
            printf("%d\t",Arr[icnt]);
        }
     }
}
int main()
{
    int isize=0,icnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter a number of element \n");
    scanf("%d",&isize);

    ptr=(int *)malloc(isize *sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element",isize);

    for(icnt=0;icnt<isize;icnt++)
    {
        printf("Enter element %d :",icnt+1);
        scanf("%d",&ptr[icnt]);
    }
    Digit(ptr,isize);

    free(ptr);

    return 0;


}
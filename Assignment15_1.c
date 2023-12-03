// Problem Statement : Accept N number from user and accept one another number as NO, check whethe NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

bool check(int Arr[],int iLength,int iNo)
{
    int icnt = 0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==iNo)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    int isize=0,iRet=0,icnt=0,ivalue=0;
    int *P=NULL;
    bool bRet=false;

    printf("Enter number of element\n");
    scanf("%d",&isize);

    P=(int *)malloc(isize *sizeof(int));

    if(P==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
        printf("Enter %d element",isize);

        for(icnt=0;icnt<isize;icnt++)
        {
            printf("Enter element %d :",icnt+1);
            scanf("%d",&P[icnt]);
        }

         printf("Enter the element that you want to search : \n");
        scanf("%d",&ivalue);

    bRet = check(P,isize,ivalue);

    if(bRet==true)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is not present");
    }

    free(P);

    return 0;
}
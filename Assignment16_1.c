// Problem Statement : Accept N number from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

int Maximum(int Arr[],int iLength)
{
    int icnt = 0;
    int imax=0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]>imax)
        {
            imax = Arr[icnt];
        }
        
    }
    return imax;
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

    iRet =Maximum(P,isize);

    printf("largest number is %d",iRet);

    free(P);

    return 0;
}
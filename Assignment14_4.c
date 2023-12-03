// Problem Statement : Accept N Number from user and return frequency of 11 from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int icnt =0;
    int iFrquency=0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==11)
        {
             iFrquency++;
        }
    }
    return iFrquency;
}
int main()
{
    int isize=0,iRet=0,icnt=0;
    int *P=NULL;

    printf("Enter a number of element\n");
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

        iRet=Frequency(P,isize);

        printf("%d",iRet);

        free(P);

        return 0;
}
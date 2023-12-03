//Problem Statement :  Accept N Number from user and dispaly all such element which is are even and divisible by 5.

#include<stdio.h>
#include<stdlib.h>
void Dispaly(int Arr[],int iLength)
{
    int icnt =0;

    for(icnt =0;icnt<iLength;icnt++)
    {
        if(Arr[icnt] % 2 ==0 && Arr[icnt] % 5 ==0)
        {
            printf("%d",Arr[icnt]);     
        }
    }
}
int main()
{
    int isize =0,iRet=0,icnt=0;
    int *P=NULL;

    printf("Enter number of elements\n");
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
        printf("Enter Element %d :",icnt+1);
        scanf("%d",&P[icnt]);
    }

    Dispaly(P,isize);

    free(P);

    return 0;
}
// Problem Statement : Accept N Number from user and accept range ,Display all element from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int icnt =0;


    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]>=iStart && Arr[icnt]<=iEnd)
        {
            printf("%d\t",Arr[icnt]);
        }
    }

}
int main()
{
    int isize=0,iRet=0,icnt=0,ivalue1=0,ivalue2=0;
    int *P=NULL;

    printf("Enter a number of element\n");
    scanf("%d",&isize);

    printf("Enter the starting point");
    scanf("%d",&ivalue1);

    printf("Enter the ending point");
    scanf("%d",&ivalue2);

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

        Range(P,isize,ivalue1,ivalue2);

        free(P);

        return 0;
}
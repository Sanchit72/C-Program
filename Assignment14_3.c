// Problem Statement : Accept N Number from user check whether that numbers contains 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

bool check(int Arr[],int iLength)
{
    int icnt = 0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==11)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    int isize=0,iRet=0,icnt=0;
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
    bRet = check(P,isize);

    if(bRet==true)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }

    free(P);

    return 0;
}
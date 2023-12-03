// Problem Statement : Accept N number from user and accept one another number as No,return index of last occurrence of that No

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

bool LastOcc(int Arr[],int iLength,int iNo)
{
    int icnt = 0;
    int Lastoccurrence = -1;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt]==iNo)
        {
        Lastoccurrence = icnt;
        }
        
    }
    return Lastoccurrence;
}
int main()
{
    int isize=0,iRet=0,icnt=0,ivalue=0;
    int *P=NULL;
    bool bRet=false;

    printf("Enter number of element\n");
    scanf("%d",&isize);

    printf("Enter number of element");
    scanf("%d",&ivalue);

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

    iRet = LastOcc(P,isize,ivalue);

    if(iRet==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of number is %d\n",iRet);
    }

    free(P);

    return 0;
}
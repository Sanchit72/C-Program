//Problem Statement : Accept N Number fro user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int icnt = 0;
    int iFrquency1 = 0;
    int iFrquency2 = 0;
    int imul = 1;

    for(icnt=0;icnt<iLength;icnt++)
    {
      if(Arr[icnt] %2 !=0)
        {
             imul=imul*Arr[icnt];
        }
          
    }
    return imul;
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

        iRet=CountEven(P,isize);

        printf("Product is %d",iRet);

        free(P);

        return 0;
}
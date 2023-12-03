#include<stdio.h>

int MultFact(int iNo)
{
    int icnt=0;
    int imul=1;

 for(icnt = 1;icnt < iNo; icnt++)
 {
    if((iNo % icnt)==0)
    {
        imul = imul*icnt;
    }
 }
 return imul;
}
int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter a number\n");
    scanf("%d",&ivalue);

    iRet=MultFact(ivalue);

    printf("%d",iRet);

    return 0;
}
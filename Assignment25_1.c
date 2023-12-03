// Problem Statement : write a program which dispaly ASCII table.
// Decimal ,Hexadecimal,Octal from 0 to 255


#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ASCII Table_ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");

    for(iCnt = 0;iCnt<=255;iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
}

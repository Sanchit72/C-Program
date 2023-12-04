// Problem Satement :

#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    iDigit=iNo%10;
    printf("%d\n",iDigit);     //1
    iNo=iNo/10;                //72
    
    iDigit=iNo%10;
    printf("%d\n",iDigit);      //2
    iNo=iNo/10;                 //7
    
    iDigit=iNo%10;
    printf("%d\n",iDigit);      //7
    iNo=iNo/10;                 //0

}

int main()
{
    int ivalue = 721;

    //printf("Enter number : \n");
    //scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
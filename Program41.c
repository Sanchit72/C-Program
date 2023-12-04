// Problem Satement :

#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

  printf("value of iNo is :%d\n",iNo);

    printf("_ _ _ _ _ _ _ __ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __ _ \n");
    iDigit=iNo%10;
    printf(" Digit is :%d\n",iDigit);  
    iNo=iNo/10;   
    printf("value of iNo is :%d\n",iNo);       
    printf("_ _ _ _ _ _ _ __ _ _ __ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __ _ \n");
    iDigit=iNo%10;
    printf(" Digit is :%d\n",iDigit);     
    iNo=iNo/10;           
    printf("value of iNo is :%d\n",iNo);      
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    iDigit=iNo%10;
    printf(" Digit is :%d\n",iDigit);     
    iNo=iNo/10;      
    printf("value of iNo is :%d\n",iNo);          

}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
#include<stdio.h>

void Display(int iNo)
{
 while(iNo > 0)
 {
    printf(" * ");
    iNo --;
 }

} 


int main()
{
    auto int ivalue=0;

    printf("Enter the number : ");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}
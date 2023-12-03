#include<stdio.h>
int Subtraction(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;

}
int main()
{
    int value1= 0, value2=0;
    int ret = 0;
    printf("Enter first number :\n");
    scanf("%d",&value1);

    printf("enter second number :\n");
    scanf("%d",&value2);

    ret = Subtraction(value1,value2);
    printf("Subtraction is : %d\n",ret);

    return 0;
}
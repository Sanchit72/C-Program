//problem statement : Accept 2 values from user and perform the adddition.

// Step 1: Understsnd the problem statement
// conclusion : we have to accept 2 integer and perform its addition

// Step 2: write the algorithm

/*
START
    Accept first no from and store it into no1
    Accept secound no user and store it into no2
    Create one variable to store the result named as Ans
    perform Addition of no1 and no2 store the result in Ans
    Display the result form to user 
STOP  
*/
// Step 3: Deside the programing langauage(c ,c++,java,python)

// Step 4:select the programing langauage
// C Programing 
#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int isum=0;
    isum=iNo1+iNo2;

    return isum;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iAns=0;

    printf("Enter the first number :\n");
    scanf("%d",&ivalue1);

    printf("Enter the secound number :\n");
    scanf("%d",&ivalue2);

    iAns=Addition(ivalue1,ivalue2);

    printf("Addition is : %d\n",iAns);

    return 0;
}
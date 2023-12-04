// Problem Statement : Accept two number from user and find minimum number
// Step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition.

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result named as Ans
        Perform maximum of no1 and no2, store the result in Ans
        if return
        No2
        else
        No2
    STOP
*/

// Step 3: Decide the programming language (C/C++/Java/Python)
// We select C programming

// Step 4: Write the program
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Minimum
//Description : it will return smallest number of two value
//Input   : int,int
//Output : int
//Auther name : Sanchit Ashok kale
//Date : 2/10/2023
//
///////////////////////////////////////////////////////////////////////
int Minimum(int No1,int No2)
{
   int Ans=0;
   if(No1<No2)
   {
    return No1;
   }
   else
   {
    return No2;
   }

}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iRet =0;

    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter secound number :\n");
    scanf("%d",&ivalue2);

    iRet=Minimum(ivalue1,ivalue2);

    printf("smallest number is :%d \n",iRet);

    return 0;
}
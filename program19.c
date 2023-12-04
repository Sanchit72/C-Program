// Problem Statement : Accept three number from user and return maximum number
// Step 1 : Understand the problem statement
// Conclusion : We have to accept 3 integers and perform its maximum.

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Accept second number from user and store it into no3
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
//Function name :Maximum
//Description : it is used to find maximum number
//Input   : int ,int,int
//Output : 
//Auther name : Sanchit Ashok kale
//Date : 3/10/2023
//
///////////////////////////////////////////////////////////////////////
int Maximum(int No1,int No2,int No3)
{
    if((No1>=No2) && (No1>=No3))
    {
        return No1;
    }
    else if((No2>=No1)&& (No2>=No3))
    {
        return No2;
    }
    else{
        return No3;

    }
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;
    int iRet=0;

    printf("Enter a first number :\n");
    scanf("%d",&ivalue1);

    printf("Enter a secound number :\n");
    scanf("%d",&ivalue2);

    printf("Enter a third number :\n");
    scanf("%d",&ivalue3);

    iRet=Maximum(ivalue1,ivalue2,ivalue3);

    printf("Largast is %d \n",iRet);

}
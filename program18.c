// Problem Statement : Accept three number from user and find the Avarage

// Step 1 : Understand the problem statement
// Conclusion : We have to accept 3 integers and perform its avarage.

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no3
        Accept second number from user and store it into no2
        Create one variable to store the result named as Ans
        Perform maximum of no1 and no2, store the result in Ans
        
    STOP
*/

// Step 3: Decide the programming language (C/C++/Java/Python)
// We select C programming

// Step 4: Write the program
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name : Avarage
//Description : it is used to calculate avarage
//Input   : int ,int,int
//Output : float
//Auther name : Sanchit Ashok kale
//Date : 3/10/2023
//
///////////////////////////////////////////////////////////////////////
float Avarage(int No1,int No2,int No3)
{
    float fAns=0.0f;
    fAns=(((float)No1+No2+No3)/3);
    return fAns;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int ivalue3=0;

    float fRet=0.0;
    printf("Enter a first number :\n");
    scanf("%d",&ivalue1);

    printf("Enter a secound number :\n");
    scanf("%d",&ivalue2);

    printf("Enter a third number :\n");
    scanf("%d",&ivalue3);

    fRet=Avarage(ivalue1,ivalue2,ivalue3);

    printf("Avarage is :%f\n",fRet);
    return 0;
}
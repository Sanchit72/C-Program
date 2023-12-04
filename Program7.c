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

// Step 4:write the program
// C Programing 
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// function name :   Addition
// Description :     it is use to perform addition of 2 integers
// input arguments : integer , integer
// output :          integer 
// Author :          sanchit ashok kale
// Date :            25/09/2023
//
//////////////////////////////////////////////////////////////////////////////
int Addition(int iNo1,int iNo2)
{
    int isum=0;           // variable to store the value of addition
    isum=iNo1+iNo2;

    return isum;
}
///////////////////////////////////////////////////////////////////////////////
//
//Entery point function of an applicatin which performs addition of 2 inegers
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1=0;      // variable to store first input 
    int ivalue2=0;      // variable to store secound input
    int iAns=0;         // variable to store the result

    printf("Enter First Number :\n");
    scanf("%d",&ivalue1);

    printf("Enter Secound Number :\n");
    scanf("%d",&ivalue2);

    iAns=Addition(ivalue1,ivalue2);    // function call to perform addition

    printf("Addition is : %d\n",iAns);

    return 0;

}

//step 5: Test the code

/*
test case 1:
input:10 11
output:21

test case 2:
input :10 0
output :10

test case 3:
input :12 -6
output :6

test case 4:
input :-6 -5
output:-11

*/

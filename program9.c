//Problem Statment : Calculatecube

//Step 1: Understand the problem statement
//Conclusion :We are going to use the formula No*No*No
//Step 2: Algorithm

/*
START
   Accept value1 from user and store into Ans
   Create variable as Ans and store value Number
   Display the value of cube to the user
STOP
*/

#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Calculatecube
//Description : it is used to calculatecube
//Input   : int
//Output : int
//Auther name : Sanchit Ashok kale
//Date : 2/10/2023
//
///////////////////////////////////////////////////////////////////////
long int Calculatecube(int No1)
{
    long int Ans=0;
    Ans=No1*No1*No1;
    return Ans;
}
////////////////////////////////////////////////////////////////////
//
// Entry point function
//
/////////////////////////////////////////////////////////////////// 
int main()
{
     int value1=0;
     long int Ans=0;

    printf("Enter a Number :");
    scanf("%d",&value1);

    Ans=Calculatecube(value1);

    printf("cube is :%ld",Ans);

   return 0;
}
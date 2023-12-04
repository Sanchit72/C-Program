// Problem Statement : cheak the  result which class pass
//step 1 :Understand the problem statement

//step 2 :Algorithm
/*
START
     Accept first number from user and store it into fmarks
        
STOP
*/
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Dispalyclass
//Description : it is used to check which class pass
//Input   : float
//Output : float
//Auther name : Sanchit Ashok kale
//Date : 3/10/2023
//
/////////////////////////////////////////////////////////////////////
//logical OR || -> if any of the condition is TRUE then it enters inside the if
//logical AND && -> if all of the condition are TRUE then it enters inside the if 

void DisplayClass(float fmarks)
{
    if((fmarks<0.00)||(fmarks>100.00))      // Filter
    {
        printf("Invalid marks...\n");
    }
    if((fmarks>=0)&&(fmarks<35.00))
    {
       printf("You are fail..\n");
    }
    else if((fmarks>=35.00)&&(fmarks<50.00))
    {
       printf("Your class is pass class..\n");
    }
    else if((fmarks>=50.00)&&(fmarks<60.00))
    {
       printf("Your class is Secound class..\n");
    }
    else if((fmarks>=60.00)&&(fmarks<75.00))
    {
       printf("Your class is First class..\n");
    }
    else if((fmarks>=75.00)&&(fmarks<=100.00))
    {
       printf("Your class is First with Distinction..\n");
    }
}

int main()
{
    float fvalue=0.0f;

    printf("Enter your percentage : \n");
    scanf("%f",&fvalue);

    DisplayClass(fvalue);

    return 0;
}
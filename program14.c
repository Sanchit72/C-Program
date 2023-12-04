// proble Statement :

//step 1 :Understand the problem statement

//step 2 :Algorithm
/*
START
     Accept first number from user and store it into imarks
        Accept second number from user and store it into itotal
        Create one variable to store the result named as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
STOP
*/
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :DispalyExamtime
//Description : it is used to dispaly exam time
//Input   : int 
//Output : 
//Auther name : Sanchit Ashok kale
//Date : 3/10/2023
//
///////////////////////////////////////////////////////////////////////
void DisplayExamTime(int istandard)
{
    switch (istandard)
    {
    case 1:
        printf("your exam is at 8Am \n");
           break;
    case 2:
        printf("your exam is at 9Am \n");
           break;
    case 3:
        printf("your exam is at 10Am \n");
           break;
    case 4:
        printf("your exam is at 11Am \n");
           break;
    case 5:
        printf("your exam is at 12Am \n");
           break;
    
    default:
        printf("wrong input..\n");
    }
}

int main()
{
    auto int ivalue=0;

    printf("Enter your standard :\n");
    scanf("%d",&ivalue);

     DisplayExamTime(ivalue);
    return 0;
}
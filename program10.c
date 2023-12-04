// Problem Statemaent : Accept number from user chekwether for even or odd

//Step 1: Understand the problem statement
//Conclusion :We are going to use the formula No*No*No
//Step 2: Algorithm

/*
START
   Accept number from user
   Divide that number by 2
   If reminder is 0 then dispaly even otherwise Display odd

STOP
*/
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Calculate even odd
//Description : it is used to chekeven or odd number
//Input   : int,bool
//Output : int
//Auther name : Sanchit Ashok kale
//Date : 2/10/2023
//
///////////////////////////////////////////////////////////////////////
bool cheakEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int ivalue=0;
    bool bret=false;

    printf("Enter a Number :");
    scanf("%d",ivalue);
    
    bret=cheakEven(ivalue);
    if(bret==true)
    {
        printf("%d is an even number\n",ivalue);
    }
    else{
        printf("%d is an odd number \n",ivalue);
    }
    return 0;
}
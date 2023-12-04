//problem Statement: Accept radius from user calculate the area of corcle

//Step 1: Understand the problem statement
//Conclusion :We are going to use the formula PI*R*R
//Step 2: Algorithm

/*
START
   Accept radius from user and store into RADIUS
   Create variable as PI and store value 3.14
   calculate area PI*RADIUS*RADIUS
   Display the value of Area to the user
STOP
*/
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :CalculateArea
//Description : it is use to calculate Area of circle
//Input   : float
//Output : float
//Auther name : Sanchit Ashok kale
//Date : 2/10/2023
//
///////////////////////////////////////////////////////////////////////
#define PI 3.14
float calculatearea (float fRadius)
{
    auto float fAns=0.0;
    
    fAns=PI*fRadius*fRadius;
     return fAns;
}
//////////////////////////////////////////////////////////////////
//
// Entery point function
//
//////////////////////////////////////////////////////////////////
int main()
{
     auto float fRadius =0.0;
     auto float farea =0.0;

    printf("Enter a Radius of circle ");
    scanf("%f",&fRadius);

    farea=calculatearea(fRadius);

    printf("Area of circle is :%f\n",farea);


    return 0;
}
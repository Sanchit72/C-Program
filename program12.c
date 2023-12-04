// problem statement : Accept to value  calculatepersantage

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
//Function name :CalculatePersentage
//Description : it is used to calculatepercentage
//Input   : int ,int
//Output : float
//Auther name : Sanchit Ashok kale
//Date : 3/10/2023
//
///////////////////////////////////////////////////////////////////////
float CalculatePercentage(int imarks,int itotal)
{
    auto float Ans=0.0;

    if((imarks<0)||(itotal<0))  //Filter
    {
        printf("Invalid input \n");
        return Ans;
    }
    if(imarks > itotal)     // Filter
    {
        printf("Invalid input \n");
        return Ans;
    }
    Ans=(((float)imarks/(float)itotal)*100);
    return Ans;

}
////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    float fret =0.0;

    printf("Enter a marks : ");
    scanf("%d",&ivalue1);

    printf("Enter a total marks :");
    scanf("%d",&ivalue2);

fret=CalculatePercentage(ivalue1,ivalue2);

printf("your percentage is : %f\n",fret);
    return 0;
}
// Problem rStatement : Accept number from user and calculate factor and return Addition

#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Sumfactor
//Description : it is used to display number of factor
//Input   : int 
//Output : int
//Auther name : Sanchit Ashok kale
//Date : 9/10/2023
//
///////////////////////////////////////////////////////////////////////
int Sumfactors(int iNo)
{
 int icnt =0;
 int isum =0;

 for(icnt=1;icnt <= (iNo/2);icnt++)
 {
    if((iNo%icnt)==0)
    {
        isum = isum + icnt;
    }
    
 }
 return isum;
}

int main()
{
     int ivalue1=0;
     int iRet =0;

    printf("Enter the number :\n");
    scanf("%d",&ivalue1);

   iRet=Sumfactors(ivalue1);

   printf("Sum of Factore are :%d\n",iRet);

    return 0;
}

// Time complexity : O(N/2)

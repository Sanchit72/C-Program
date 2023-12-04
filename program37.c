//problem statement : Accept number from user and checkwheter perfect number


#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :checkperfect
//Description : it is used to display number of factor
//Input   : int 
//Output : bool
//Auther name : Sanchit Ashok kale
//Date : 10/10/2023
//
///////////////////////////////////////////////////////////////////////
int icnt =0;
 int isum =0;

 bool checkperfect(int iNo)
 {
if(iNo<0)
{
    iNo=-iNo;  // updater
}

 for(icnt=1;icnt <= (iNo/2);icnt++)
 
 {
    if((iNo % icnt)==0)
    {
        isum = isum + icnt;
    }
 }
 if(isum==iNo)
    {
       return true;
    }
    else{
        return false;
    }
 }

int main()
{
     int ivalue1=0;
     bool bRet =false;

    printf("Enter the number :\n");
    scanf("%d",&ivalue1);

   bRet=checkperfect(ivalue1);

   if(bRet==true)
   {
    printf("%d is perfect number ",ivalue1);
   }
   else
   {
    printf("%d is not perfect number ",ivalue1);
   }


    return 0;
}

// Time complexity : O(N/2)

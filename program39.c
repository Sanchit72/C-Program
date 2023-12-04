// Problem Statement : Accept number from user and checkwhether prime number

#include <stdio.h>
#include <stdbool.h>
/////////////////////////////////////////////////////////////////////
//
// Function name :checkPrime
// Description : it is used to display number of prime number
// Input   : int
// Output : int
// Auther name : Sanchit Ashok kale
// Date : 10/10/2023
//
///////////////////////////////////////////////////////////////////////
bool checkprime(int iNo)
{
   int icnt = 0;
   bool bflag = true;

   if (iNo < 0) // Updator
   {
      iNo = -iNo;
   }

   for (icnt = 2; icnt <= (iNo / 2); icnt++)
   {
      if ((iNo % icnt) == 0)
      {
         bflag = false;
         break;
      }
   }
   return bflag;
}

int main()
{
   int ivalue1 = 0;
   bool bRet = false;

   printf("Enter the number :\n");
   scanf("%d", &ivalue1);

   bRet = checkprime(ivalue1);

   if (bRet == true)
   {
      printf("%d is prime number ", ivalue1);
   }
   else
   {
      printf("%d is not prime number ", ivalue1);
   }

   return 0;
}

// Time complexity : O(N/2)

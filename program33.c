// problem statement : Accept one number from user and display all factor this number

#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Dispalyfactor
//Description : it is used to display number of factor
//Input   : int 
//Output : int
//Auther name : Sanchit Ashok kale
//Date : 9/10/2023
//
///////////////////////////////////////////////////////////////////////
void Displayfactors(int iNo)
{
 int icnt =0;
 
 printf("Factors of %d are :\n",iNo);

 for(icnt=1;icnt<iNo;icnt++)
 {
    if((iNo%icnt)==0)
    {
        printf("%d\t",icnt);
    }
 }

}

int main()
{
     int ivalue1=0;
    
    printf("Enter the number :\n");
    scanf("%d",&ivalue1);

    Displayfactors(ivalue1);

    return 0;
}


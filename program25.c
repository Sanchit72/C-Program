//Problem Statement: Accept number from user and Print jay ganesh use for loop

#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function name :Dispaly
//Description : it is used to dispaly jay ganesh on screen
//Input   : int 
//Output : int
//Auther name : Sanchit Ashok kale
//Date : 9/10/2023
//
///////////////////////////////////////////////////////////////////////
void Disaply(int iNo)
{
    int icnt=0;
    
          //1     //2     //3
    for(icnt=1;icnt<=iNo;icnt++)
    {        //4
        printf("Jay ganesh..\n");
    }
}

int main()
{
    int ivalue=0;

    printf("Enter number of times you want to dispaly jay ganesh on screen \n");
    scanf("%d",&ivalue);

    Disaply(ivalue);
    
    return 0;
}
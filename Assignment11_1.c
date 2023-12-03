//Problem Statement : Write a program which accept number from user and Dispaly its digits in reverse order


#include<Stdio.h>

void DispalyDigit(int iNo)
{
    int iDigit=0;

    if(iNo<iDigit)
    {
        iNo=-iNo;
    }
    while (iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
    

    
}

int main()
{
    int ivalue = 0;
    

    printf("Enter number");
    scanf("%d",&ivalue);

    DispalyDigit(ivalue);



    return 0;
}
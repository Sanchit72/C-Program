#include<stdio.h>
#include<stdbool.h>


bool CheckPallindrome(int iNo)
{
    int icopy = iNo;   //xerox kadali
    int iDigit = 0;
    int iRev = 0;

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = iRev * 10 + iDigit;
    }
    if(iRev == icopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&ivalue);

    bRet = CheckPallindrome(ivalue);

    if(bRet == true)
    {
        printf("%d is a pallindrome number \n",ivalue);
    }
    else
    {
        printf("%d is not a pallindrome number \n",ivalue);
    }


    return 0;
}
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool checkvowel(char c)
{

    if((c =='a' || c == 'e' || c=='i' ||c=='o' || c=='u'))
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
    char cvalue='\0';
    bool bRet=false;

    printf("Enter chracter \n");
    scanf("%c",&cvalue);

    bRet=checkvowel(cvalue);

    if(bRet==true)
    {
        printf("%c is a vowel",cvalue);
    }
    else
{
    printf("%c is not vowel",cvalue);
}


}
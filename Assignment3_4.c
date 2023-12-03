#include<stdio.h>

void DisplayConvert(char cvalue)
{
    if(islower(cvalue))
    {
        printf("%c",toupper(cvalue));
    }
    else if(isupper(cvalue)) 
    {
        printf("%c",tolower(cvalue));
    }
}
int main()
{
    char cvalue = '\0';

    printf("Enter character\n");
    scanf("%c",&cvalue);

    DisplayConvert(cvalue);

    return 0;
}
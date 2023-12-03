/* Accept character from user .if it is capital then dispaly all the characters from the input characters till Z. 
   if input characcter is small then print all the character in reverse order till a.in other case return directly.
*/

#include<stdio.h>

void Display(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z') 
    {
        while (ch >= 'a')
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
   
    
}
int main()
{
    char cvalue = '\0';

    printf("Enter the character");
    scanf("%c",&cvalue);

    Display(cvalue);

    return 0;
}
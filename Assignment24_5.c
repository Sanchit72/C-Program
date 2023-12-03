/*Accept division of student from user and depends on the division display exam timing there are 4 division in school
  as A,B,C,D exam of division A at 7 Am,B at 8.30 Am,C at 9.20 Am and D at 10.30 Am.
  (Application should be case insensitive)
*/

#include<stdio.h>
#include<stdbool.h>

bool Dispalyschedule(char chDiv)
{
        char division = toupper(chDiv);
        
    switch (division)
    {
    case 'A':
        printf("Exam for Division A at 7:00 AM\n");
        break;
    case 'B':
        printf("Exam for Division B at 8:30 AM\n");
        break;
    case 'C':
        printf("Exam for Division C at 9:20 AM\n");
        break;
    case 'D':
        printf("Exam for Division D at 10:30 AM\n");
        break;
    default:
        printf("Invalid division entered!\n");
        return false;
    }

    return true;

}
int main()
{
    char cvalue = '\0';
    bool bRet = false;

    printf("Enter your Devision :\n");
    scanf("%c",&cvalue);

    bRet = Dispalyschedule(cvalue);


    return 0;
}
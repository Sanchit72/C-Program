// Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*).

#include<stdio.h>
#include<stdbool.h>
bool chkspecial(char ch)
{
    if(ch =='!' || ch=='@' || ch=='#' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
    {
        return true;
    }

    return false;
}
int main()
{
  char cvalue='\0';
  bool bRet = false;

  printf("ENter the character");
  scanf("%c",&cvalue);

  bRet = chkspecial(cvalue);

  if(bRet==true)
  {
    printf("it is special character");
  }
  else
  {
    printf("it is not a special character");
  }

    return 0;
}
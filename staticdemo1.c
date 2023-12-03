#include<Stdio.h>

void Fun()
{
    static int i=10;
    i++;
    printf("value of i is : %d\n",i);
}
int main()
{
    int no =51;
    Fun();
    Fun();
    Fun();

    return 0;
}
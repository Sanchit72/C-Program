#include<stdio.h>
struct Hello
{
    int no;
    float d;
}hobj;

struct Demo
{
    int i;
    float f;

    // struct Hello hobj1;
    // struct Hello hobj2;
}dobj;

int main()
{
    printf("size of object is : %d\n",sizeof(dobj));
    printf("size of object is : %d\n",sizeof(hobj));

    return 0;
}

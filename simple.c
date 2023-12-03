#include<stdio.h>
int main()
{
    int Arr[5]={10,20,30,40,50};
    printf("base addres of whole array%d\n",Arr);
    printf("first element %d\n",Arr[0]);
    printf("Address of second element%d\n",&Arr[2]);
    printf("size of third element%d\n",sizeof Arr[3]);
    return 0;

}
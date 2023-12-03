#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret= 0;

    fd = open("Marvellous.txt",O_RDWR);

        Ret = read(fd,Arr,10); 

        printf("%d bytes gets Read in the files\n",Ret);
        printf("DATA is : %s\n",Arr);

    close(fd);
    return 0;
}

//O_RDONLY :read
//O_WRONLY : Write 
//O_RDWR : Read+write
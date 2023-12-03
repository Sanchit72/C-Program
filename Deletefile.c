#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    unlink("Marvellous.txt");

    printf("file Delete successfuly...");
    
    return 0;
}

//O_RDONLY :read
//O_WRONLY : Write 
//O_RDWR : Read+write
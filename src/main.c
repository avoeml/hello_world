#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    printf("\n\n******** Hello, World! First program ready to ship to Github and Yocto Image ********\n\n");

    int countNum = 10;
    printf("Starting counting down from: %d \n\n", countNum);

    while (countNum)
    {
        printf("Count %d\n", countNum);
        countNum--;
        sleep(1);
    }

    printf("Program finished...\n\n");
    
}

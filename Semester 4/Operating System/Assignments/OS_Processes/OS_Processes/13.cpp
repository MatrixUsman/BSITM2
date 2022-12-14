//
//  13.cpp
//  OS
//
//  Created by Usman on 02/04/2022.
//

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#define SIZE 5
int nums[SIZE] = {0, 1, 2, 3, 4};
int main()
{
    std::cout << "Name:    Muhammad Usman Razwan" << std::endl;
    std::cout << "Roll no:    BSIT-M2-20-48" << std::endl;
    int i;
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        for (i = 0; i < SIZE; i++)
        {
            nums[i] *= -i;
            printf("CHILD: %d ", nums[i]); /* LINE X */
        }
    }
    else if (pid > 0)
    {
        wait(NULL);
        for (i = 0; i < SIZE; i++)
            printf("PARENT: %d ", nums[i]); /* LINE Y */
    }
    return 0;
}

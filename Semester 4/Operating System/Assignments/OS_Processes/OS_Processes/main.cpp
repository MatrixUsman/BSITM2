//
//  main.cpp
//  OS
//
//  Created by Usman on 02/04/2022.
//

#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>

#include <unistd.h>
int main()
{
    std::cout << "Name:    Muhammad Usman Razwan" << std::endl;
    std::cout << "Roll no:    BSIT-M2-20-48" << std::endl;
    pid_t pid;
    /* fork a child process */
    pid = fork();
    if (pid < 0)
    { /* error occurred */
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0)
    { /* child process */
        execlp("/bin/ls", "ls", NULL);
    }
    else
    { /* parent process */
        /* parent will wait for the child to complete */
        wait(NULL);
        printf("Child Complete");
    }
    return 0;
}

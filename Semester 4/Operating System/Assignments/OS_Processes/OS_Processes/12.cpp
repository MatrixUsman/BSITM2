//
//  12.cpp
//  OS
//
//  Created by Usman on 02/04/2022.
//
#include <iostream>

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    std::cout << "Name:    Muhammad Usman Razwan" << std::endl;
    std::cout << "Roll no:    BSIT-M2-20-48" << std::endl;
    pid_t pid, pid1;
    /* fork a child process */
    pid = fork();
    if (pid < 0)
    { /* error occurred */
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0)
    { /* child process */
        pid1 = getpid();
        printf("child: pid = %d", pid);   /* A */
        printf("child: pid1 = %d", pid1); /* B */
    }
    else
    { /* parent process */
        pid1 = getpid();
        printf("parent: pid = %d", pid);   /* C */
        printf("parent: pid1 = %d", pid1); /* D */
        wait(NULL);
    }
    return 0;
}

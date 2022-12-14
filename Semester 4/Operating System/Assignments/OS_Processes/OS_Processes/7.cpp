//
//  7.cpp
//  OS
//
//  Created by Usman on 02/04/2022.
//
#include <iostream>

#include <stdio.h>
#include <windows.h>
#define BUFFER_SIZE 25
int main(VOID)
{
    std::cout << "Name:    Muhammad Usman Razwan" << std::endl;
    std::cout << "Roll no:    BSIT-M2-20-48" << std::endl;
    HANDLE Readhandle;
    CHAR buffer[BUFFER_SIZE];
    DWORD read;
    /* get the read handle of the pipe */
    ReadHandle = GetStdHandle(STD INPUT HANDLE);
    /* the child reads from the pipe */
    if (ReadFile(ReadHandle, buffer, BUFFER_SIZE, &read, NULL))
        printf("child read %s", buffer);
    else
        fprintf(stderr, "Error reading from pipe");
    return 0;
}

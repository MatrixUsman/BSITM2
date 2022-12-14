//
//  10.cpp
//  OS
//
//  Created by Usman on 02/04/2022.
//
#include <iostream>

#include <stdio.h>
#include <unistd.h>
using namespace std;
int main()
{
    std::cout << "Name:    Muhammad Usman Razwan" << std::endl;
    std::cout << "Roll no:    BSIT-M2-20-48" << std::endl;
    int i;
    for (i = 0; i < 4; i++)
        fork();
    return 0;
}

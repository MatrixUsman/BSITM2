//
//  main.cpp
//  MultiThreading in C++
//
//  Created by Usman on 08/04/2022.
//


#include <Windows.h>
#include <process.h>
#include <stdio.h>
#include<iostream>
using namespace std;

unsigned int __stdcall mythread(void* data)
{
    cout<<"Thread: "<<GetCurrentThreadId()<<endl;
    return 0;
}

int main(int argc, char* argv[])
{
    HANDLE myhandle[2];

    myhandle[0] = (HANDLE)_beginthreadex(0, 0, &mythread, 0, 0, 0);
    myhandle[1] = (HANDLE)_beginthreadex(0, 0, &mythread, 0, 0, 0);
    WaitForSingleObject(myhandle[0], INFINITE);
    WaitForSingleObject(myhandle[1], INFINITE);
    CloseHandle(myhandle[0]);
    CloseHandle(myhandle[1]);
    getchar();

    return 0;
}

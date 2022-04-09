//
//  main.cpp
//  MultiThreading in C++ for Linux
//
//  Created by Usman on 09/04/2022.
//

#include <iostream>
#include <unistd.h>
#include <pthread.h>
using namespace std;

string str;
void* fun(void*)
{
  sleep(1);
  cout << "Created Child thread!" << str << endl;
    return 0;
}

int main()
{
  pthread_t t[4];
  for(int i=0; i<4; i++)
  {
      cout << "Created -> Thread:  "<< i<< str << endl;
      pthread_create(&t[i], NULL, &fun, NULL);
      pthread_detach(t[i]);
}
exit(EXIT_SUCCESS);
return 0;
}

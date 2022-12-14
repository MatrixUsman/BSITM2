//
//  main.cpp
//  First_Assignment_os
//
//  Created by Usman on 29/03/2022.
//

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
using namespace std;

int main(){
    cout<<"Name:    Muhammad Usman Razwan"<<endl;cout<<"Roll no:    BSIT-M2-20-48"<<endl;
    pid_t a= fork();
    
    if (a > 0) {
        wait(NULL);
        pid_t b = fork();
        
        if (b > 0) {
            
            wait(NULL);
            pid_t c = fork();
            
            if (c > 0) {
                wait(NULL);
                pid_t d = fork();

                if (d > 0) {
                    wait(NULL);
                    pid_t e = fork();

                    if (e > 0) {
                        wait(NULL);
                        pid_t f = fork();
                        if (f > 0) {
                            wait(NULL);
                            cout<<endl<<"Parent Process |-> "<<getpid()<<endl;
                            cout<<endl<<"Parent Process 2 |-> "<<getpid()<<endl;
                        }else if(f==0){
                            cout<<"Child 1: "<<getpid()<<" -> Parent ID: "<<getppid()<<endl;
                        }
                    }else if(e==0){
                        cout<<"Child 2: "<<getpid()<<" -> Parent ID: "<<getppid()<<endl;
                    }

                }else if(d==0){
                    cout<<"Child 3: "<<getpid()<<" -> Parent ID: "<<getppid()<<endl;
                }
            }else if(c==0){
                cout<<"Child 4: "<<getpid()<<" -> Parent ID: "<<getppid()<<endl;
            }
        }else if (b==0){
            cout<<"Child 5: "<<getpid()<<" -> Parent ID: "<<getppid()<<endl;
        }
    }else if (a==0){
        cout<<"Child 6: "<<getpid()<<" -> Parent ID: "<<getppid()<<endl;
    }
    
    
    return 0;
}

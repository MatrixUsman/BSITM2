#include<iostream>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
using namespace std;

int main(){
	cout<<"Name:  Nabrass gull"<<endl;
	cout<<"Roll No:  BSIT-M2-20-08"<<endl;
pid_t a= fork();

if(a>0){
    wait (NULL);
pid_t b= fork();
    
if (b>0){
    wait (NULL);
    pid_t c= fork();
    
    if (c>0){
        wait (NULL);
        cout<<"Parent Process:"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
        
    }
    else if (c==0){
        cout<<"Child 1 :"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
    }
}
else if(b==0){
     cout<<"Child 2 :"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
}
}else if(a==0){
    cout<<"Child 3 :"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
}
pid_t e= fork();

if(e>0){
    wait (NULL);
pid_t f= fork();
    
if (f>0){
    wait (NULL);
    pid_t g= fork();
    
    if (g>0){
        wait (NULL);
        cout<<"Parent Process:"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
        
    }
    else if (g==0){
        cout<<"Child 1 :"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
    }
}
else if(f==0){
     cout<<"Child 2 :"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
}
}else if(e==0){
    cout<<"Child 3 :"<<endl;
        cout<<"PID:"<<getpid()<<endl;
        cout<<"Parent PID:"<<getppid()<<endl;
        cout<<endl;
}
return 0;
}

//
//  main.cpp
//  Q1 OS
//
//  Created by Usman Razwan on 14/3/22.
//

#include<iostream>
using namespace std;

int stringSplit(string str)
{
    string alphabet, numeric, special_char;
    int num;
    for (int i=0; i<str.length(); i++)
    {
        if (isdigit(str[i]))
            numeric.push_back(str[i]);
        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
            alphabet.push_back(str[i]);
        else
            special_char.push_back(str[i]);
    }
 
    if (special_char.length()) {
        return 0;
    }
    else if (numeric.length()){
        return num = stoi(numeric);
    }
    else {
        return -1; }
}
int main(){
    string a,b,c;
    int A,B,C;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter C: ";
    cin>>c;
    cout<<endl<<"Your Equation is: "<<a<<" + "<<b<<" = "<<c<<endl<<endl;
    A = stringSplit(a);
    B = stringSplit(b);
    C = stringSplit(c);
    if ( A== -1 || B == -1 || C == -1) {
        cout<<"No Substitute can be calculated"<<endl<<endl;
        return 0;
    }
    else if (A==0) {
        A=C-B;
    }
    else if (B==0){
        B = C-A;
    }
    else
        C = A+B;
    
    cout<<"Your New Equation is: "<<A<<" + "<<B<<" = "<<C<<endl<<endl;
    return 0;
}

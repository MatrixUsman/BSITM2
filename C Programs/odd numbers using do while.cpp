//
//  main.cpp
//  odd numbers using do while
//
//  Created by Usman Rizwan on 3/16/21.
//

#include <iostream>
using namespace std;

int main() {

    int start,ending,odd,counter,even;

    cout<<"enter starting number : ";
    cin>>start;
    counter=start;
    cout<<"enter ending number : ";
    cin>>ending;

    odd=0;
    even=0;

    do {
        if (counter%2==0) {
            even++;
        }else{
            odd++;
        }
        counter++;

    }while(counter<=ending);

    cout<<endl<<endl<<"Odd : "<<odd<<endl;
    cout<<"even : "<<even<<endl<<endl<<endl;

    return 0;
}

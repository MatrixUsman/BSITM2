#include<iostream>
using namespace std;
void prime(int num)
{
    int div=0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
                div++;
        }
        if(div==2)
            cout<<num<<endl;
    }
    int main()
    {
        cout<<"Enter range:";
        int lowerLimit, upperLimit;
        cin>>lowerLimit>>upperLimit;
        cout<<"Prime numbers between"<<lowerLimit<<"and"<<upperLimit<<" are:"<<endl;
        for(int i=lowerLimit;i<=upperLimit;i++)
            prime(i);
        return 0;

    }

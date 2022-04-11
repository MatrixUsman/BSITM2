#include <iostream>
using namespace std;

int main()
{
    double loan, markup, total, Final;
    
    cout<<"Enter loan amount in RS: ";
    cin>>loan;
    cout<<"Enter Markup Percentage %: ";
    cin>>markup;
    
    total = loan * markup / 100;
    Final = total + loan;
    
    
    cout<<"Your interes on RS "<<loan<<" would be RS "<<total<<endl;
    cout<<"Your Total Amount to be paid in 5 years including Interest is: "<<Final<<endl;
}

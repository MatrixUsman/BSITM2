#include <iostream>
using namespace std;

class Employees {
   public:
   string id;
   double salary;
    string grade;
    Employees() {}

    Employees(string x, double y, string z) {
      id = x;
        salary = y;
        grade = z;
   }

   void printDetails() {
      cout << id << " - " << "PKR " << salary << " - " << grade << endl;
   }
};

int main() {

    Employees emplooye[5];


    emplooye[0] = Employees("5186be0dab7f35e7944dc881", 33342.0, "A" );
    emplooye[1] = Employees("b885d5a7b69b76f8ba70a615", 12657.0, "A");
    emplooye[2] = Employees("4551490d73f788b3d3088fc1", 91233.0, "A");
    emplooye[3] = Employees("26a6c194e8922b12b0b51cda", 21257.0, "A");
    emplooye[4] = Employees("9537e9af40463791c365d23b", 56532.0, "A");
    cout << "ID" << " - " <<  "SALARY" << " - " << "GRADE" << endl;
   for(int i=0; i < 5; i++) {
       emplooye[i].printDetails();
   }
}


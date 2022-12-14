//
//  main.cpp
//  Agent record Management System
//
//  Created by Usman Rizwan on 1/5/21.
//

#include<iostream> // To manipulate I/O
#include<fstream>  // To manipulate files
#include<iomanip>  // To manipluate Parameters
using namespace std;

class agent_data { // the class that stores all of our data
private:
    string pnumber; // Product number
    int anumber;// Number of the agent
    int price; // All of the subjects in 2nd BSIT semester

public:
    void getdata(); // To input data
    void showdata() ; // To show data constant
    int PublicAgentNumber() const; // Public Agent number
}; //class ends here

void agent_data::getdata(){ //Storing the data here
    agent_data stud;
    ifstream ifs;
    ifs.open("db.dat",ios::binary);
    cout<<endl<<"Enter Agent number: ";
    cin>>anumber;
        cout<<endl<<endl<<"Enter Product number: ";
        cin>>pnumber;
            cout<<"total rupees of that product sold today: ";
            cin>>price;
        cout<<endl<<endl<<"Record Has Been Created ";
}

void agent_data::showdata()  { //Using this to showing to data
    cout<<endl<<"number of the agent : "<<anumber;
    cout<<endl<<"Product number : "<<pnumber;
    cout<<endl<<"Total rupees sale : "<<price;
}

int  agent_data::PublicAgentNumber() const { //Just converting Public Agent number to private Agent number
    return anumber;
}

//Declaring all Functions
void create_record(); // Creates particular record
void display_sp(int); //Searching a particular record by there agent number
void display_all(); // display all records
int db_check(); //Checking weather the db is there
void pause(); // Pausing it until a key press is logged

int main() { // doesnt need any explanations
    char order='0'; // To avoid mess ups
    int num;
    cout<<setprecision(2); // To round off decimal values upto 2
    do{
        char order;
        system("cls");
        cout<<endl<<endl<<endl<<"\tMENU";
        cout<<endl<<endl<<"\t1 Create a record";
        cout<<endl<<endl<<"\t2 Search a record";
        cout<<endl<<endl<<"\t3 Display all records ";
        cout<<endl<<endl<<"\t4 Exit";
        cout<<endl<<endl<<"What would you like to do?: ";
        cin>>order;
        system("cls");
        switch(order){
            case '1': create_record(); break;
            case '2': cout<<endl<<endl<<"\tEnter the Agent Number you would like to search "; cin>>num; display_sp(num); break;
            case '3': display_all(); break;
            case '4': cout<<"Exiting the space."; exit(0);
        }}while (order!='4');
    return 0;
}

void pause(){
    cin.ignore();
    cin.get();
}
void display_sp(int n) { //Reads a specific Roll number's data
    agent_data stud;
    ifstream ifs;
    if (!db_check()){
        ifs.open("db.dat",ios::binary);
    while(ifs.read(reinterpret_cast<char *> (&stud), sizeof(agent_data))) {
        if(stud.PublicAgentNumber()==n)
        {
            stud.showdata();
            pause();
        }}
    ifs.close();
    if(stud.PublicAgentNumber()!=n){
        cout<<endl<<endl<<"The searched record does not exist";
        pause();
    }}}


void create_record() { //writing Agent's details to the DB file
    agent_data stud;
    ofstream ofs;
    ofs.open("db.dat",ios::binary|ios::app);
    stud.getdata();
    ofs.write(reinterpret_cast<char *> (&stud), sizeof(agent_data));
    ofs.close();
}

int db_check(){ //Checking if DB is present
    ifstream ifs;
    ifs.open("db.dat",ios::binary);
    if(!ifs){
        cout<<"File could not be opened, Press any Key to exit.";
        pause();
        return 1;
    }
    else
        return 0;
}

void display_all() {  // The function which unites mother sister of the RAM and CPU to loop through entire DB and show result in one place
    agent_data stud;
    ifstream ifs;
    if (!db_check()){
        ifs.open("db.dat",ios::binary);
        cout<<endl<<endl<<endl<<"\t\tLooping through database to display all reccords"<<endl<<endl;
        cout<<endl<<endl<<"===================================="<<endl;
        while(ifs.read(reinterpret_cast<char *> (&stud), sizeof(agent_data))){
            stud.showdata();
            cout<<endl<<endl<<"===================================="<<endl;
    }
    ifs.close();
        pause();
    }}


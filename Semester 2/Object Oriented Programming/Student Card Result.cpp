#include<iostream> // To manipulate I/O
using namespace std;



//Declaring all Functions
void headphones();
void handfrees();
void phones();
void phones_cases();


int main() { // doesnt need any explanations
    char order='0';
        system("cls");
        cout<<endl<<endl<<endl<<"\t*****Asad Online Shop *****";
        cout<<endl<<endl<<endl<<"\tMain MENU";
        cout<<endl<<endl<<"1 Headphones";
        cout<<endl<<endl<<"2 Handsfrees";
        cout<<endl<<endl<<"3 Phones";
        cout<<endl<<endl<<"4 Phone Cases";
        cout<<endl<<endl<<"5 Exit";
        cout<<endl<<endl<<"What would you like to see?: ";
        cin>>order;
        system("cls");
        switch(order){
            case '1': headphones(); break;
            case '2': cout<<endl<<endl;handfrees(); break;
            case '3': cout<<endl;phones();break;
            case '4': cout<<endl; phones_cases();break;
            case '5': cout<<"Exiting the space."; exit(0);
        }
}

void headphones() {
    cout<<"\t\t\t***** Headphones Menu *****"<<endl<<endl<<endl;
    cout<<"1 AKG 150\t\t\t3000Rs"<<endl;
    cout<<"2 Beats \t\t\t8000Rs"<<endl;
    cout<<"3 Airpods 2\t\t\t30000Rs"<<endl;
    cout<<"4 Sony Live\t\t\t2500Rs"<<endl;
    cout<<"5 Samsung\t\t\t1000Rs"<<endl<<endl<<endl;
    cout<<" You will be given 10% discount at the checkut"<<endl;
    cout<<"Press Enter to back to main menu";
    cin.get();
    cin.ignore();
    main();
}

void handfrees(){
    cout<<"\t\t\t***** Handfrees Menu *****"<<endl<<endl<<endl;
    cout<<"Audionic Handfrees              300Rs"<<endl;
    cout<<"Apple Original Handfrees        2800Rs"<<endl;
    cout<<"Samsung Handfrees               150Rs"<<endl;
    cout<<"Samsung Handfrees Original      500Rs"<<endl;
    cout<<"You must buy 2 Handfrees in order to complete transactions"<<endl;
    cout<<"Press Enter to back to main menu";
    cin.get();
    cin.ignore();
    main();

}

void phones() {
    cout<<"\t\t\t***** Phones Menu *****"<<endl<<endl<<endl;
    cout<<"1 Iphone"<<endl;
    cout<<"2 Samsung"<<endl;
    cout<<"Which Brands Phones would you like to see: ";
    int order=0;
    cin>>order;
    switch(order){
        case 1:
            cout<<"iPhone XS max         150000Rs"<<endl;
            cout<<"iPhone X Black Color  100000Rs"<<endl;
            cout<<"iPhone 7s             50000Rs"<<endl<<endl<<endl;
            cout<<"Press any key to go back to main menu";
            cin.get();
            cin.ignore();
            break;
        case 2:
            cout<<"S10 Plus          100000Rs"<<endl;
            cout<<"S10 Lite          680000Rs"<<endl;
            cout<<"S20               86000Rs"<<endl<<endl<<endl;
            cout<<"Press any key to go back to main menu";
            cin.get();
            cin.ignore();
            break;
    }
    cout<<"As you chose Phones you might be interested in Cases"<<endl;
    phones_cases();
}

void phones_cases() {
    cout<<"\t\t\t***** Phones Cases Menu *****"<<endl<<endl<<endl;
    cout<<" Black Case for iPhone XS Max        500Rs"<<endl;
    cout<<" White Case for iPhone X             50Rs"<<endl;
    cout<<" S20 Lite Transparent Case           300Rs"<<endl;
    cout<<" S10 Plus Solid Case                 250Rs"<<endl;
    cout<<"Press Enter to back to main menu";
    cin.get();
    cin.ignore();
    main();
}

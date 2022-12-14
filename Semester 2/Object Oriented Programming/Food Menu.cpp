//
//  main.cpp
//  Menu Food
//
//  Created by Usman Rizwan on 03/12/2020.
//

#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


struct menuitem
{
       string menulist;
       double price;
};
menuitem menu[8];
void getdata();
void showdata();
void selectItems();
void cal();
int c[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

int main()
{
       getdata();
       showdata();
       selectItems();
       cal();
       return 0;

}
void getdata()
{
       menu[1].menulist = "Shavrma";
       menu[1].price = 69.00;
       menu[2].menulist = "Chicken Biriani";
       menu[2].price = 420.00;
       menu[3].menulist = "Fried Rice";
       menu[3].price = 69.00;
       menu[4].menulist = "Chat";
       menu[4].price = 76.99;
       menu[5].menulist = "Karahi";
       menu[5].price = 234.49;
       menu[6].menulist = "Meet";
       menu[6].price = 999.00;

}
void showdata()
{
       cout << "Dinner items offered by the us are" << endl;
       cout << 1 << "\t" << menu[1].menulist << setw(12) << "RS " << menu[1].price << endl;
       cout << 2 << "\t" << menu[2].menulist << setw(15) << "RS " << menu[2].price << endl;
       cout << 3 << "\t" << menu[3].menulist << setw(14) << "RS " << menu[3].price << endl;
       cout << 4 << "\t" << menu[4].menulist << setw(9) << "RS " << menu[4].price << endl;
       cout << 5 << "\t" << menu[5].menulist << setw(9) << "RS " << menu[5].price << endl;
       cout << 6 << "\t" << menu[6].menulist << setw(15) << "RS " << menu[6].price << endl;


}
void selectItems()
{
       int ch,quantity;
       char con;
       do{
              cout << "Enter your choice :";
              cin >> ch;
              cout << "Enter the Quantity :";
              cin >> quantity;
              switch (ch)
              {
              case 1:
              {
                     c[1] = c[1] + quantity;
                     cout << "You have Selected :" << menu[1].menulist << endl;

                     break;
              }
              case 2:
              {
                     c[2] = c[2] + quantity;
                     cout << "You have Selected :" << menu[2].menulist << endl;

                     break;
              }
              case 3:
              {
                     c[3] = c[3] + quantity;
                     cout << "You have Selected :" << menu[3].menulist << endl;

                     break;
              }
              case 4:
              {
                     c[4] = c[4] + quantity;
                     cout << "You have Selected :" << menu[4].menulist << endl;

                     break;
              }
              case 5:
              {
                     c[5] = c[5] + quantity;
                     cout << "You have Selected :" << menu[5].menulist << endl;

                     break;
              }
              case 6:
              {
                     c[6] = c[6] + quantity;
                     cout << "You have Selected :" << menu[6].menulist << endl;

                     break;
              }
              case 7:
              default:
                     cout << "invalid input" << endl;
              }
              cout << "anything else ? (y/n)";
              cin >> con;


       } while (con != 'n');
       cout << endl;
}
void cal()
{
       double total = 0, tax, due;
       cout << "------Syed Nasir Restaraunt-----" << endl;
       for (int i = 1; i < 8; i++)
       {
              if (c[i] > 0)
              {
                     cout << c[i] << "\t" << menu[i].menulist << "   RS " << menu[i].price << endl;
                     total = total + (menu[i].price*c[i]);
              }

       }
       tax = total*0.17;
       due = total + tax;
       cout << "        Tax " << "\t" << tax << endl;
       cout << "-----------------------------------------------" << endl;
       cout << "Amount due      RS " << due << endl;
       cout << "-----------------------------------------------" << endl;
}

//
//  main.cpp
//
//  Created by Usman Razwan on 01/05/21.
//

#include <iostream>
using namespace std;
class bus {
public:
    string nameOfBus;
    char DirectionOfBus;
    float PositionOfBus;

    bus(string name, char direction){
        nameOfBus = name;
        DirectionOfBus = direction;
        PositionOfBus = 0;
    }

    void turn(){
        if (DirectionOfBus == 'N')
        {
            DirectionOfBus = 'E';
        }
        else if (DirectionOfBus == 'E')
        {
            DirectionOfBus = 'S';
        }
        else if (DirectionOfBus == 'S')
        {
            DirectionOfBus = 'W';
        }
        else if (DirectionOfBus == 'W')
        {
            DirectionOfBus = 'N';
        }
    }
    void turn(char new_direction){
        DirectionOfBus = new_direction;
    }
    void move (float disatnce){
        PositionOfBus = PositionOfBus+disatnce;
    }
};

int main(void) {
    // Parameters can be controlled from here
    string Name = "usman";
    char InitialDirection ='N';
    char NextDirection = 'W';
    float distance = 12.4;
    float moreDisatnce = 45.3;




    // Initalizing the inital bus attributes
    bus bus1(Name, InitialDirection);

    // Turn to right
    bus1.turn();

    // Overloaded Turn to specified direction
    bus1.turn(NextDirection);


    // making bus move
    bus1.move(distance);

    // making bus move more
    bus1.move(moreDisatnce);

    // Printing Final Data
    cout << "Bus Name: " <<bus1.nameOfBus << endl;
    cout << "Bus's Direction: " <<bus1.DirectionOfBus << endl;
    cout << "Bus's Distance So Far: " <<bus1.PositionOfBus << endl;
   return 0;
}

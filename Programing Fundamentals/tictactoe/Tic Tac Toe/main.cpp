//
//  main.cpp
//  Tic Tac Toe
//
//  Created by Usman Rizwan on 22/1/21
//

#include <iostream>
#include <fstream> // For file manipulation


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

void Logo()  //Function to display Usman
{
    std::string line;

    #ifdef _WIN32  //Checking if opreating system is windows
        std::ifstream myfile ("logo.txt");
        if (myfile.is_open())
        {
        while ( getline (myfile,line)){
            std::cout <<"\t\t\t\t\t\t\t"<< line << '\n';
        }

        myfile.close();

    #elif __APPLE__ //Checking if opreating system is MacOS
        std::ifstream myfile ("/Users/matrix/Desktop/Tic Tac Toe/Tic Tac Toe/logo.txt");
        if (myfile.is_open())
        {
            while ( getline (myfile,line))
        {
            std::cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<< line << '\n';
        }

        myfile.close();

    #endif
    }
}
int marker(int player)  //Function for returning user
{
    if (player == 1)
    {
        return 'X';
    }
    else
    {
        return 'O';
    }
}

void clearSquare() //To clear the CLI
{
    for(int i = 0; i<10; i++)
        square[i] = '0'+i;
}

int VictoryChecker() //compairing blocks by other blocks to check if player has won
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

void Cli() //Command Line Interface of the game.
{

    #ifdef _WIN32  //Checking if opreating system is windows

    system("cls"); // cls command to clear screen for windows
    Logo(); // Logo

    std::cout << "\t\t\t\t\t\t\t\t"<<"Tic Tac Toe"<< std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<< "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl << std::endl;

    #elif __APPLE__ //Checking if opreating system is MacOS

    system("export TERM=xterm"); //clear command to clear screen for MacOS
    system("clear"); //clear command to clear screen for MacOS
    Logo(); // Logo

    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"Tic Tac Toe"<< std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<< "Player 1 (X)  -  Player 2 (O)" << std::endl << std::endl << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"_____|_____|_____" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"     |     |     " << std::endl << std::endl;
    #endif
}
    int main() //Main
    {
        bool replay=true;
        while (replay!=false){

        int player = 1,i;
        char choice, mark;

        do   // Checking Input given from user and compairing it with the box
        {
            Cli();

            if(player%2)
            {
                player=1;
            }
            else
            {
                player=2;
            }

            std::cout << "Player " << player << ", Choose the box: ";
            std::cin >> choice;

            mark=marker(player);

            if (choice == '1' && square[1] == '1' && choice < '9')
                square[1] = mark;

            else if (choice == '2' && square[2] == '2' && choice < '9')
                square[2] = mark;

            else if (choice == '3' && square[3] == '3' && choice < '9')
                square[3] = mark;

            else if (choice == '4' && square[4] == '4' && choice < '9')
                square[4] = mark;

            else if (choice == '5' && square[5] == '5' && choice < '9')
                square[5] = mark;

            else if (choice == '6' && square[6] == '6' && choice < '9')
                square[6] = mark;

            else if (choice == '7' && square[7] == '7' && choice < '9')
                square[7] = mark;

            else if (choice == '8' && square[8] == '8' && choice < '9')
                square[8] = mark;

            else if (choice == '9' && square[9] == '9' && choice <= '9')
                square[9] = mark;

            else  // To handle the crap shit user might input
            {
                std::cout<<"Invalid move "<<std::endl;

                player--;

            }
            player++;
            i=VictoryChecker();

            } while(i==-1);

        Cli();

        if(i==1)
        {
            std::cout<<"Player "<<--player<<" has Won! "<<std::endl;//Decrementing the Player value so in output it shows which player won
        }
        else
        {

            std::cout<<"Game draw - No one has WON!"<<std::endl;
        }

        std::string Replay;
        std::cout<<"Would you like to try your luck again? and play "<<std::endl;
        std::cin>>Replay;

            if(Replay == "y"|| "yes" || "Yes" ||"YES" ||"Y" || "ye" || "Ye" ||"yas" ||"Yas"){ //sasti try to catch all types crap shit input user my enter
                clearSquare();
                        }
                else
                    {
                   exit(0); //explicitly exiting.
                    }
        }}

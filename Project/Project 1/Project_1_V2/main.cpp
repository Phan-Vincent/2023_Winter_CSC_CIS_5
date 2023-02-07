/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on February 2, 2023, 9:34 PM
 * Purpose: Project 1 Version 2
 */

//System Libraries
#include <iostream> // I/O Library
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
      srand(time(0)); // Seed random number generator

    //Declare Variables
    char   again,     //Play again or exit?
           hit;       //Hit or stand?
    float  bal,       //Balance in USD
           bet;       //Wager
    short  pHand = 0, //Player hand
           dHand = 0; //Dealer hand
    string name,      //Player's name
           bj = "21"; //Blackjack!
    int    win   = 0, //Win counter
           loss  = 0, //Loss counter
           tie   = 0, //Tie counter
            bJ   = 0; //Blackjack counter
    
    //Initialize Variables
    bal = 500; //Starting balance of $500
    
    //Map/Process the Inputs -> Outputs
    cout << "Welcome to Dr. Lehr's Casino!" << endl;
    cout << "What is your name?" << endl;
    cin >> name; //Grab player's name
    cout << "Would you like to play blackjack, " << name << "? (Y/N)" << endl;
    cin >> again; //Play?
    
    switch(again)
    {
        //Exit
        case 'N': 
        case 'n':
            cout << "You are now exiting the program." << endl;
            return 0;
            break;
        //Play
        case 'Y':
        case 'y':
            while (again == 'Y' || again == 'y') 
            {
                //Deal two cards to both player and dealer
                pHand = rand() % 11 + 1;
                dHand = rand() % 11 + 1;
                pHand += rand() % 11 + 1;
                dHand += rand() % 11 + 1;
                cout << "You and the dealer are both dealt two cards." << endl;
    
                //Player's turn
                cout << "Your hand: " << pHand << endl;
                if (pHand == 21) //First 2 cards = 21 -> blackjack
                {
                    cout << endl;
                    cout << bj << bj << bj << bj << setw(4) << bj << setw(12) << bj << bj << bj << bj << bj << bj << setw(4) << bj << bj << bj << bj << bj << bj << setw(4) << bj << setw(12) << bj << setw(12) << bj << setw(4) << bj << bj << bj << bj << bj << bj << setw(4) << bj << bj << bj << bj << bj << bj << setw(6) << bj << setw(12) << bj << setw(4) << bj << bj << endl;
                    cout << "21    21  21          21        21  21            21        21            21  21        21  21              21        21    2121"<<endl;
                    cout << "21    21  21          21        21  21            21      21              21  21        21  21              21      21      2121"<<endl;
                    cout << "21    21  21          21        21  21            21    21                21  21        21  21              21    21        2121"<<endl;
                    cout << "21   21   21          21        21  21            21  21                  21  21        21  21              21  21          2121"<<endl;
                    cout << "21  21    21          212121212121  21            2121                    21  212121212121  21              2121            2121"<<endl;
                    cout << "2121      21          21        21  21            21                      21  21        21  21              21              2121"<<endl;
                    cout << "21  21    21          21        21  21            2121                    21  21        21  21              2121            2121"<<endl;
                    cout << "21   21   21          21        21  21            21  21                  21  21        21  21              21  21          2121"<<endl;
                    cout << "21    21  21          21        21  21            21    21                21  21        21  21              21    21        2121"<<endl;
                    cout << "21    21  21          21        21  21            21      21      21      21  21        21  21              21      21          "<<endl;
                    cout << "21    21  21          21        21  21            21        21      21  21    21        21  21              21        21    2121"<<endl;
                    cout << "21212121  2121212121  21        21  212121212121  21          21      21      21        21  212121212121    21          21  2121"<<endl;
                    cout << endl;
                    bJ++;
                }
                else
                {
                    do 
                    {
                        cout << "Hit (H) or stand (S)?" << endl;
                        cin >> hit;
                        if (hit == 'S' || hit == 's') //Player stands
                        {
                            cout << "It is the dealer's turn now." << endl << endl;
                        }
                    } while (hit != 'H' && hit != 'h' && hit != 'S' && hit != 's' 
                            && pHand <= 21); //Input validation
                    while ((hit == 'H' || hit == 'h') && pHand <= 21) //Player hits
                    {
                        pHand += rand() % 11 + 1 * pow(1, 0);
                        cout << "Your new hand: " << pHand << endl;
                        if (pHand > 21)
                        {
                            cout << "You busted!" << endl << endl;
                        }
                        else
                        {
                            do
                            {
                                cout << "Hit (H) or stand (S)?" << endl;
                                cin >> hit;
                                if (hit == 'S' || hit == 's') //Player hits then eventually stands
                                {
                                    cout << "It is the dealer's turn now." << endl << endl;
                                }
                            } while (hit != 'H' && hit != 'h' && hit != 'S' 
                                    && hit != 's' && pHand <= 21);
                        }
                    }   
                }

                //Dealer's turn
                cout << "Dealer's hand: " << dHand << endl;
                if (dHand == 21)
                    {
                        cout << "Dealer has blackjack!" << endl;
                    }
                    while(dHand < 17) //Dealer must draw until >= 17
                    {
                        cout << "Dealer hits." << endl;
                        dHand += rand() % 11 + 1;
                        cout << "Dealer's new hand: " << dHand << endl;
                        //Dealer keeps going until they beat the player or lose
                        while (dHand < pHand && dHand < 21 && pHand <= 21)
                        {
                            cout << "Dealer hits." << endl;
                            dHand += rand() % 11 + 1;
                            cout << "Dealer's new hand: " << dHand << endl;
                        }
                    }
                //Display Inputs/Outputs
                //Win/Loss
                if (pHand > 21) //Player bust, dealer wins
                {
                    cout << "Your hand: " << pHand << endl;
                    cout << name << " busted. Dealer wins." << endl;
                    loss++;
                }
                else if (dHand > 21) //Dealer bust, player wins
                {
                    cout << "Dealer busted. " << name << " wins." << endl;
                    win++;
                }
                else if (pHand > dHand && pHand <= 21) //Player wins
                {
                    cout << "Your hand: " << pHand << endl;
                    cout << "Dealer's hand: " << dHand << endl;
                    cout << name << " wins." << endl;
                    win++;
                }
                else if (pHand < dHand && dHand <= 21) //Dealer wins
                {
                    cout << "Your hand: " << pHand << endl;
                    cout << "Dealer's hand: " << dHand << endl;
                    cout << name << " loses." << endl;
                    loss++;
                }
                else //Tie
                {
                    cout << "Your hand: " << pHand << endl;
                    cout << "Dealer's hand: " << dHand << endl;
                    cout << "It's a tie." << endl;
                    tie++;
                }
                cout << endl;
                //Output count of win/loss/tie/BJ
                cout << "You have won " << win << " time(s), lost " << loss << " time(s), "
                        "and tied " << tie << " time(s)." << endl;
                cout << (bJ > 0 ? "You have gotten blackjack " + to_string(bJ) + " time(s)!" 
                        : "You have not gotten blackjack yet.") << endl;
                do
                {
                    cout << "Play again? (Y/N)" << endl;
                    cin >> again;
                } while (again != 'Y' && again != 'N' && again != 'y' && again != 'n');
            }
            break;
        
        default: //Input verification
            cout << "Invalid input. Please run again and enter 'Y' for yes or 'N' for no." << endl;
            break;
    }
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


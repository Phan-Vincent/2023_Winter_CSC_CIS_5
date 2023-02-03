/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on February 2, 2023, 12:20 PM
 * Purpose: Project 1 Version 0
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
    char again,      //Play again or exit?
           hit;      //Hit or stand?
    float bal,       //Balance in USD
          bet;       //Wager
    short pHand = 0, //Player hand
          dHand = 0; //Dealer hand
    
    //Initialize Variables
    bal = 500; //Starting balance of $500
    
    //Map/Process the Inputs -> Outputs
    cout << "Welcome to Blackjack!" << endl;
    cout << "Would you like to play? (Y/N)" << endl;
    cin >> again;
    
    if (again == 'N' || again == 'n') //Exit
    {
        cout << "You are now exiting the program." << endl;
        return 0;
    }
    //Input validation
    if (again != 'Y' || again != 'y' || again != 'N' || again != 'n')
    {
        cout << "Please enter 'Y' for yes or 'N' for no." << endl;
        cin >> again;
        if (again == 'N' || again == 'n') //Exit
        {
            cout << "You are now exiting the program." << endl;
            return 0;
        }
    }
    while (again == 'Y' || again == 'y') //Start game
    {
        //Deal two cards to player and dealer
        pHand = rand() % 11 + 1;
        dHand = rand() % 11 + 1;
        pHand += rand() % 11 + 1;
        dHand += rand() % 11 + 1;
        
        //Player's turn
        do
        {
            cout << "Your hand: " << pHand << endl;
            cout << "Hit (H) or stand (S)?" << endl;
            cin >> hit;
            if (hit =! 'h' || hit != 'H' || hit != 's' || hit == 'S') //Input validation
            {
                cout << "Please enter 'H' to hit or 'S' to stand." << endl;
                cin >> hit;
            }
            while (hit == 'h' || hit == 'H')
            {
                pHand += rand() % 11 + 1;
                cout << "Your new hand: " << pHand << endl;
                cout << "Hit (h) or stand (s)?" << endl;
                cin >> hit;
            }
            
        } while((hit == 'h' || hit == 'H') && pHand <= 21);
        
        //Dealer's turn
        while(dHand < 17)
        {
            dHand += rand() % 11 + 1;
            while (dHand < pHand && dHand < 21 && pHand <= 21)
            {
                dHand += rand() % 11 + 1;
            }
        }
        //Display Inputs/Outputs
        //Win/Loss
        if (pHand > 21) //Player bust, dealer wins
                {
                    cout << "Your hand: " << pHand << endl;
                    cout << "You busted. Dealer wins." << endl;
                }
        else if (dHand > 21) //Dealer bust, player wins
        {
            cout << "Dealer's hand: " << dHand << endl;
            cout << "Dealer busted. You win." << endl;
        }
        else if (pHand > dHand && pHand <= 21) //Player wins
        {
            cout << "Your hand: " << pHand << endl;
            cout << "Dealer's hand: " << dHand << endl;
            cout << "You win." << endl;
        }
        else if (pHand < dHand && dHand <= 21) //Dealer wins
        {
            cout << "Your hand: " << pHand << endl;
            cout << "Dealer's hand: " << dHand << endl;
            cout << "You lose." << endl;
        }
        else //Tie
        {
            cout << "Your hand: " << pHand << endl;
            cout << "Dealer's hand: " << dHand << endl;
            cout << "It's a tie." << endl;
        }
        cout << endl;
        cout << "Play again? (Y/N)" << endl;
        cin >> again;
    }
    
    return 0;
}
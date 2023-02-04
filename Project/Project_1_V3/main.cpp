/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on February 3, 2023, 3:14 PM
 * Purpose: Project 1 Version 3
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
const float bal = 500.0; //Starting balance of $500

//Science, Math, Conversions, Dimensions

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
      srand(time(0)); // Seed random number generator

    //Declare Variables
    char   again,       //Play again or exit?
           hit,         //Hit or stand?
           ace,         //Double ace for player
           dAce;        //Double ace for dealer
    float  bet;         //Wager
    short  pHand = 0,   //Player hand
           dHand = 0,   //Dealer hand
           hitAce= 0,   //Player hits and gets an ace
           dHitAce=0;   //Dealer hits ace
    string name,        //Player's name
           bj    = "21";//To print BLACKJACK
    int    win   = 0,   //Win counter
           loss  = 0,   //Loss counter
           tie   = 0,   //Tie counter
           bJ    = 0,   //Blackjack counter
           pAce  = 0;   //Player after ace hit, 1 or 11?
    bool   bust = false,//Did player bust?
           pJack= false,//Player got blackjack
           dJack= false;//Dealer got blackjack
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    cout << "Welcome to Dr. Lehr's Fabulous Phalanx Casino!" << endl; //Greeting
    cout << "What is your name?" << endl;
    cin >> name; //Grab player's name
    cout << "Would you like to play blackjack, " << name << "? (Y/N)" << endl; //Play?
    cin >> again; 
    
    switch(again) //Exit or play + input validation
    {
        //Exit for N or n
        case 'N': 
        case 'n':
            cout << "You are now exiting the program." << endl;
            return 0;
            break;
        //Play for Y or y
        case 'Y':
        case 'y':
            while (again == 'Y' || again == 'y') 
            {
                //Deal two cards to both player and dealer
                cout << endl << "You and the dealer are each dealt two cards." << endl;
                pHand = rand() % 11 + 1; //1 to 11
                dHand = rand() % 11 + 1;
                pHand += rand() % 11 + 1; //(1 to 11) + (1 to 11)
                dHand += rand() % 11 + 1;
                //Fixes issue of 22 for double ace since no one would do that
                if (pHand == 22) //Prompt if they want 12 or 2
                {
                    do
                    {
                        cout << "You have two aces. Enter '1' for 12 or '2' for 2." << endl;
                        cin >> ace;
                        if (ace == '1') //Player chose 12
                        {
                            pHand -= 10;
                        }
                        else if (ace == '2') //Player chose 2
                        {
                            pHand -= 20;
                        }
                    } while (ace != '1' && ace != '2'); //Repeat if invalid input

                }
                //Dealer gets double ace
                if (dHand == 22)
                {
                    dAce = rand() % 2; //50/50 chance on dealer choosing 12 or 2
                    if (dAce == '0') //Dealer chose 12
                    {
                        dHand -= 10;
                    }
                    else //Dealer chose 2
                    {
                        dHand -= 20;
                    }
                }
    
                //Player's turn
                cout << "Your hand: " << pHand << endl;
                if (pHand == 21) //First 2 cards = 21 -> blackjack
                {
                    //Giant BLACKJACK prints
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
                    bJ++; //Blackjack counter
                    pJack = true; //Player got blackjack
                    bust = false; //No bust
                }
                else //No blackjack
                {
                    pJack = false;
                    do 
                    {
                        cout << "Hit (H) or stand (S)?" << endl; //Hit or stand?
                        cin >> hit;
                        if (hit == 'S' || hit == 's') //Player stands
                        {
                            cout << "It is the dealer's turn now." << endl << endl; //Turn ends
                        }
                    } while (hit != 'H' && hit != 'h' && hit != 'S' && hit != 's' 
                            && pHand <= 21); //Input validation
                    while ((hit == 'H' || hit == 'h') && pHand <= 21) //Player hits
                    {
                        cout << "You are dealt another card." << endl;
                        hitAce = rand() % 11 + 1 * pow(1, 0); //Checks if player's dealt card is ace
                        if (hitAce == 11)
                        {
                            do
                            {
                                cout << "You received an ace. Enter '1' for 1 or '2' for 11." << endl;
                                cin >> pAce;
                                if (pAce == 1)
                                {
                                    pHand += 1;
                                }
                                else
                                {
                                    pHand += 11;
                                }
                            } while(pAce != 1 && pAce != 2);
                        }
                        else //Not dealt an ace
                        {
                            pHand += hitAce; //Player dealt another non-ace card
                        }
                        cout << "Your new hand: " << pHand << endl;
                        if (pHand > 21) //Player busts and loses immediately
                        {
                            cout << "You busted!" << endl << endl;
                            bust = true;
                        }
                        else //Player did not bust
                        {
                            bust = false;
                            do
                            {
                                cout << "Hit (H) or stand (S)?" << endl; //Continue hitting?
                                cin >> hit;
                                if (hit == 'S' || hit == 's') //Player hits then eventually stands
                                {
                                    cout << "It is the dealer's turn now." << endl << endl;
                                }
                            } while (hit != 'H' && hit != 'h' && hit != 'S' 
                                    && hit != 's' && pHand <= 21); //Repeat if invalid input
                        }
                    }   
                }
                if (bust) //Player busted
                {
                    cout << "Your hand: " << pHand << endl;
                    cout << name << " busted. Dealer wins." << endl;
                    loss++;
                }
                else //Player did not bust and/or has blackjack -> dealer's hand is resolved
                {
                    //Dealer's turn
                    cout << "Dealer's hand: " << dHand << endl;
                    if (dHand == 21) //Dealer got blackjack
                        {
                            cout << "Dealer has blackjack!" << endl;
                            dJack = true;
                        }
                    else //Dealer did not get blackjack
                    {
                        dJack = false;
                        while(dHand < 17) //Dealer must draw until >= 17
                        {
                            cout << "Dealer hits." << endl;
                            dHitAce = rand() % 11 + 1;
                            if (dHitAce == 11) //Dealer hits ace
                            {
                                if (dHand + 11 > 21) //Dealer choose 1 if 11 makes him bust
                                {
                                    dHand += 1;
                                }
                                else //Dealer choose 11 if it doesn't make him bust
                                {
                                    dHand += 11;
                                }
                            }
                            else //Dealer did not draw ace
                            {
                                dHand += dHitAce;
                            }
                            cout << "Dealer's new hand: " << dHand << endl;
                        }    
                        //Dealer keeps going until they beat the player or lose
                        while (dHand < pHand && dHand < 21 && pHand <= 21)
                        {
                            cout << "Dealer hits." << endl;
                            dHitAce = rand() % 11 + 1;
                            if (dHitAce == 11) //Dealer hits ace
                            {
                                if (dHand + 11 > 21) //Dealer choose 1 if 11 makes him bust
                                {
                                    dHand += 1;
                                }
                                else //Dealer choose 11 if it doesn't make him bust
                                {
                                    dHand += 11;
                                }
                            }
                            else //Dealer did not draw ace
                            {
                                dHand += dHitAce;
                            }
                                cout << "Dealer's new hand: " << dHand << endl;
                        }
                    
                        //Display Inputs/Outputs
                        //Win/Loss
                        if (dHand > 21) //Dealer bust, player wins
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
                        else if (pJack && !dJack) //Player wins by being the only one with blackjack
                        {
                            cout << "You got blackjack and the dealer did not." << endl;
                            cout << name << " wins." << endl;
                            win++;
                        }
                        else //Tie
                        {
                            cout << "Your hand: " << pHand << endl;
                            cout << "Dealer's hand: " << dHand << endl;
                            cout << "It's a tie." << endl;
                            tie++;
                        }
                    }
                    if (pJack && dJack) //Tie from both having blackjack
                    {
                        cout << "Both " << name << "and dealer got blackjack." << endl;
                        cout << "It's a tie." << endl;
                        tie++;
                    }
                    else if (!pJack && dJack) //Dealer wins w/ solo blackjack
                    {
                        cout << "Dealer got blackjack." << endl;
                        cout << name << " loses." << endl;
                    }
                    
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
                    if (again == 'N' || again == 'n')
                    {
                        cout << endl << "You are now exiting the program. Thanks "
                                "for playing at the Phalanx Casino!" << endl;
                    }
                } while (again != 'Y' && again != 'N' && again != 'y' && again != 'n'); //Repeat if invalid input
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


/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on February 6, 2023, 2:10 PM
 * Purpose: Project 1 Version 4
 */

/*Changes: 
 * Check for ace on first 2 cards separately
 * Corrected: Ace = 1 or 11, not just 11
 * Assign 10 or face cards to 10
 * Formatting corrections
 * Added card numbering
 * Added ability to view last session's results
 * Program now saves win/loss info to winloss.txt
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
    char   again,            //Play again or exit?
           hit,              //Hit or stand?
           ace,              //Double ace for player
           dAce;             //Double ace for dealer
    float  bet,              //Wager
           wRate;            //Win rate
    short  pHand,            //Player hand
           dHand,            //Dealer hand
           hitA1,            //Check player for ace for 1st card
           hitA2,            //Check player for ace for 2nd card
           hitA3,            //Check player for ace on hit
           dHitA1,           //Check dealer for ace for 1st card/hit
           dHitA2,           //Check dealer for ace for 2nd card
           dHitA3,           //Check dealer for ace on hit
           face;             //Check for face cards
    string name,             //Player's name
           bj      = "21";   //To print BLACKJACK
    int    win     = 0,      //Win counter
           loss    = 0,      //Loss counter
           tie     = 0,      //Tie counter
           bJ      = 0,      //Blackjack counter
           pAce    = 0,      //Player after ace hit, 1 or 11?
           card,             //Player card counter
           dCard;            //Dealer card counter
    bool   bust,  //Did player bust?
           pJack,  //Player got blackjack
           dJack;  //Dealer got blackjack
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    cout << "Welcome to Dr. Lehr's Fabulous Phalanx Casino!" << endl; //Greeting
    cout << "What is your first name?" << endl;
    cin >> name; //Grab player's name
    cout << "Would you like to play blackjack, " << name << "? (Y/N)" << endl;//Play?
    cin >> again; 
    
    switch(again) //Exit or play + input validation
    {
        //Exit for N or n
        case 'N': 
        case 'n':
            cout << "You are now exiting the program." << endl;
            return 0;
        //Play for Y or y
        case 'Y':
        case 'y':
            while (again == 'Y' || again == 'y') 
            {
                //Initialize variables
                pHand  = 0;
                dHand  = 0;
                hitA1  = 0;           
                hitA2  = 0;
                hitA3  = 0;
                dHitA1 = 0;          
                dHitA2 = 0;
                dHitA3 = 0;
                card   = 1;
                dCard  = 1;
                bust   = false, 
                pJack  = false, 
                dJack  = false;
                
                //Deal two cards to both player and dealer
                cout << endl << "You and the dealer are each dealt two cards." << endl;
                hitA1  = rand() % 11 + 1; //1 to 11
                dHitA1 = rand() % 11 + 1;
                hitA2  = rand() % 11 + 1; //(1 to 11) + (1 to 11)
                dHitA2 = rand() % 11 + 1;
                cout << "It is " << name << "'s turn first." << endl;
                
                //Check player for ace on 1st card
                //Eventually change to show both cards before prompting
                if (hitA1 == 1 || hitA1 == 11) //Prompt if they want 1 or 11
                {
                    do
                    {
                        cout << "Card " << card << ": A" << endl <<
                                "Enter '1' for 1 or '2' for 11." << endl;
                        cin >> ace;
                        if (ace == '1') //Player chose 1
                        {
                            pHand += 1;
                        }
                        if (ace == '2') //Player chose 2
                        {
                            pHand += 11;
                        }
                    } while (ace != '1' && ace != '2'); //Repeat if invalid input
                }
                else if (hitA1 == 10) //Face card
                {
                    pHand += 10;
                    face = rand() % 4 + 1; //Randomly chooses if it's J, Q, or K
                    if (face == 1)
                    {
                        cout << "Card " << card << ": J" << endl;
                    }
                    else if (face == 2)
                    {
                        cout << "Card " << card << ": Q" << endl;
                    }
                    else if (face == 3)
                    {
                        cout << "Card " << card << ": K" << endl;
                    }
                    else
                    {
                        cout << "Card " << card << ": 10" << endl;
                    }
                }
                else //No A or face = 2-9
                {
                    cout << "Card " << card << ": " << hitA1 << endl;
                    pHand += hitA1;
                }
                card++;
                //Check on 2nd card
                if (hitA2 == 1 || hitA2 == 11)
                {
                    do
                    {
                        cout << "Card " << card << ": A" << endl <<
                                "Enter '1' for 1 or '2' for 11." << endl;
                        cin >> ace;
                        if (ace == '1') //Player chose 1
                        {
                            pHand += 1;
                        }
                        if (ace == '2') //Player chose 2
                        {
                            pHand += 11;
                        }
                    } while (ace != '1' && ace != '2'); //Repeat if invalid input
                }
                else if (hitA2 == 10) //Face card
                {
                    pHand += 10;
                    face = rand() % 4 + 1; //Randomly chooses if it's J, Q, or K
                    if (face == 1)
                    {
                        cout << "Card " << card << ": J" << endl;
                    }
                    else if (face == 2)
                    {
                        cout << "Card " << card << ": Q" << endl;
                    }
                    else if (face == 3)
                    {
                        cout << "Card " << card << ": K" << endl;
                    }
                    else
                    {
                        cout << "Card " << card << ": 10" << endl;
                    }
                }
                else //No A or face
                {
                    cout << "Card " << card << ": " << hitA2 << endl;
                    pHand += hitA2;
                }
                card++;
                
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
                        cout << "Hit (H), stand (S), or double (D)?" << endl; //Hit or stand?
                        cin >> hit;
                        if (hit == 'S' || hit == 's') //Player stands
                        {
                            cout << endl << "It is the dealer's turn now." << endl; //Turn ends
                        }
                        //Double--not done
                        if (hit == 'D' || hit == 'd')
                        {
                            for (int i = 1; i < 2; i++)
                            {
                                cout << "Your bet is doubled and are dealt exactly one more card." << endl;
                                hitA3 = rand() % 11 + 1 * pow(1, 0); //Checks if player's dealt card is ace
                                if (hitA3 == 1 || hitA3 == 11)
                                {
                                    do
                                    {
                                        cout << "Card " << card << ": A" << endl << 
                                        "Enter '1' for 1 or '2' for 11." << endl;
                                        cin >> pAce;
                                        if (pAce == 1) //Player chose 1
                                        {
                                            pHand += 1;
                                        }
                                        else //Player chose 11
                                        {
                                            pHand += 11;
                                        }
                                    } while(pAce != 1 && pAce != 2);
                                }
                                else if (hitA3 == 10) //Face
                                {
                                    pHand += 10;
                                    face = rand() % 4 + 1; //Randomly chooses if it's J, Q, or K
                                    if (face == 1)
                                    {
                                        cout << "Card " << card << ": J" << endl;
                                    }
                                    else if (face == 2)
                                    {
                                        cout << "Card " << card << ": Q" << endl;
                                    }
                                    else if (face == 3)
                                    {
                                        cout << "Card " << card << ": K" << endl;
                                    }
                                    else
                                    {
                                        cout << "Card " << card << ": K" << endl;
                                    }
                                }
                                else
                                {
                                    cout << "Card " << card << ": " << hitA3 << endl;
                                    pHand += hitA3;
                                }
                                    cout << "Your new hand: " << pHand << endl << endl;
                                    cout << "Wager: $" << endl;
                                    cout << "It is not the dealer's turn." << endl;
                                    card++;
                            }
                        }
                    } while (hit != 'H' && hit != 'h' && hit != 'S' && hit != 's' 
                            && hit != 'D' && hit != 'd' && pHand <= 21); //Input validation
                    while ((hit == 'H' || hit == 'h') && pHand <= 21) //Player hits
                    {
                        cout << "You are dealt another card." << endl;
                        hitA3 = rand() % 11 + 1 * pow(1, 0); //Checks if player's dealt card is ace
                        if (hitA3 == 1 || hitA3 == 11)
                        {
                            do
                            {
                                cout << "Card " << card << ": A" << endl << 
                                        "Enter '1' for 1 or '2' for 11." << endl;
                                cin >> pAce;
                                if (pAce == 1) //Player chose 1
                                {
                                    pHand += 1;
                                }
                                else //Player chose 11
                                {
                                    pHand += 11;
                                }
                            } while(pAce != 1 && pAce != 2);
                        }
                        else if (hitA3 == 10) //Face
                            {
                                pHand += 10;
                                face = rand() % 4 + 1; //Randomly chooses if it's J, Q, or K
                                if (face == 1)
                                {
                                    cout << "Card " << card << ": J" << endl;
                                }
                                else if (face == 2)
                                {
                                    cout << "Card " << card << ": Q" << endl;
                                }
                                else if (face == 3)
                                {
                                    cout << "Card " << card << ": K" << endl;
                                }
                                else
                                {
                                    cout << "Card " << card << ": K" << endl;
                                }
                            }
                        else
                        {
                            cout << "Card " << card << ": " << hitA3 << endl;
                            pHand += hitA3;
                        }
                        cout << "Your new hand: " << pHand << endl;
                        card++;
                        
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
                                    cout << endl << "It is the dealer's turn now." << endl;
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
                //Player did not bust and/or has blackjack -> dealer's hand is resolved
                else 
                {
                    //Dealer's turn, check 1st for ace
                    if (dHitA1 == 1 || dHitA1 == 11) //Ace
                    {
                        dHand += 11; //Always chooses 11 when under 17
                        cout << "Dealer's card " << dCard << ": A" << endl;
                        dCard++;
                    }
                    else if (dHitA1 == 10) //Face
                    {
                        dHand += 10;
                        face = rand() % 4 + 1; //Randomly chooses if it's J, Q, or K
                        if (face == 1)
                        {
                            cout << "Dealer's card " << dCard << ": J" << endl;
                            dCard++;
                        }
                        else if (face == 2)
                        {
                            cout << "Dealer's card " << dCard << ": Q" << endl;
                            dCard++;
                        }
                        else if (face == 3)
                        {
                            cout << "Dealer's card " << dCard << ": K" << endl;
                            dCard++;
                        }
                        else
                        {
                            cout << "Dealer's card " << dCard << ": 10" << endl;
                            dCard++;
                        }
                    }
                    else
                    {
                        cout << "Dealer's card " << dCard << ": " << dHitA1 << endl;
                        dHand += dHitA1;
                        dCard++;
                    }
                    //Check card 2
                    if (dHitA2 == 1 || dHitA2 == 11) //Ace
                    {
                        cout << "Dealer's card " << dCard << ": A" << endl;
                        dCard++;
                        if (dHand + 11 > 21 || (dHand + 1 > pHand && pHand <= 21)) //Choose 1 if 11 bust or beats player
                        {
                           dHand += 1;
                        } 
                        else //Choose 11 otherwise
                        {
                           dHand += 11;
                        }
                    }
                    else if (dHitA2 == 10) //Face
                    {
                        dHand += 10;
                        face = rand() % 4 + 1; //Randomly chooses if it's J, Q, or K
                        if (face == 1)
                        {
                            cout << "Dealer's card " << dCard << ": J" << endl;
                            dCard++;
                        }
                        else if (face == 2)
                        {
                            cout << "Dealer's card " << dCard << ": Q" << endl;
                            dCard++;
                        }
                        else if (face == 3)
                        {
                            cout << "Dealer's card " << dCard << ": K" << endl;
                            dCard++;
                        }
                        else
                        {
                            cout << "Dealer's card " << dCard << ": 10" << endl;
                            dCard++;
                        }
                    }
                    else
                    {
                        cout << "Dealer's card " << dCard << ": " << dHitA2 << endl;
                        dHand += dHitA2;
                        dCard++;
                    }
                    cout << "Dealer's hand: " << dHand << endl << endl;
                    
                    if (dHand == 21 && dCard == 2) //Dealer got blackjack
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
                            dHitA3 = rand() % 11 + 1;
                            if (dHitA3 == 1 || dHitA3 == 11) //Dealer hits ace
                            {
                                cout << "Dealer's card " << dCard << ": A" << endl;
                                dCard++;
                                //Dealer choose 1 if 11 makes him bust or if it beats the player
                                if (dHand + 11 > 21 || (dHand + 1 > pHand && pHand <= 21))
                                {
                                    dHand += 1;
                                }
                                else //Dealer otherwise picks 11 
                                {
                                    dHand += 11;
                                }
                            }
                            else if (dHitA3 == 10) //Face
                            {
                                dHand += 10;
                                face = rand() % 3 + 1; //Randomly chooses if it's J, Q, or K
                                if (face == 1)
                                {
                                    cout << "Dealer's card " << dCard << ": J" << endl;
                                    dCard++;
                                }
                                else if (face == 2)
                                {
                                    cout << "Dealer's card " << dCard << ": Q" << endl;
                                    dCard++;
                                }
                                else if (face == 3)
                                {
                                    cout << "Dealer's card " << dCard << ": K" << endl;
                                    dCard++;
                                }
                                else
                                {
                                    cout << "Dealer's card " << dCard << ": 10" << endl;
                                    dCard++;
                                }
                            }
                            else //Dealer did not hit ace/face
                            {
                                cout << "Dealer's card " << dCard << ": " << dHitA3 << endl;
                                dHand += dHitA3;
                                dCard++;
                            }
                            cout << "Dealer's new hand: " << dHand << endl << endl;
                        }
                       
                        //Dealer keeps going until they beat the player, tie, or lose
                        while (dHand < pHand && dHand < 21 && pHand <= 21)
                        {
                            cout << "Dealer hits." << endl;
                            dHitA3 = rand() % 11 + 1;
                            if (dHitA3 == 1 || dHitA3 == 11) //Dealer hits ace
                            {
                                cout << "Dealer's card " << dCard << ": A" << endl;
                                dCard++;
                                //Dealer choose 1 if 11 makes him bust or if it beats the player
                                if (dHand + 11 > 21 || (dHand + 1 > pHand && pHand <= 21))
                                {
                                    dHand += 1;
                                }
                                else //Dealer otherwise picks 11 
                                {
                                    dHand += 11;
                                }
                            }
                            else if (dHitA3 == 10) //Face
                            {
                                dHand += 10;
                                face = rand() % 4 + 1; //Randomly chooses if it's 10, J, Q, or K
                                if (face == 1)
                                {
                                    cout << "Dealer's card " << dCard << ": J" << endl;
                                    dCard++;
                                }
                                else if (face == 2)
                                {
                                    cout << "Dealer's card " << dCard << ": Q" << endl;
                                    dCard++;
                                }
                                else if (face == 3)
                                {
                                    cout << "Dealer's card " << dCard << ": K" << endl;
                                    dCard++;
                                }
                                else
                                {
                                    cout << "Dealer's card " << dCard << ": 10" << endl;
                                    dCard++;
                                }
                            }
                            else //Dealer no face/ace
                            {
                                cout << "Dealer's card " << dCard << ": " << dHitA3 << endl;
                                dHand += dHitA3;
                                dCard++;
                            }
                            cout << "Dealer's new hand: " << dHand << endl << endl;    
                        }
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
                
                cout << endl;
                //Output count of win/loss/tie/BJ
                wRate = (float)win * 100 / ((float)win + (float)loss + (float)tie);
                cout << "You have won " << win << " time(s), lost " << loss << " time(s), "
                        "and tied " << tie << " time(s). Win rate: " << fixed << setprecision(2) << wRate << "%" << endl;
                cout << (bJ > 0 ? "You have gotten blackjack " + to_string(bJ) + " time(s)!" 
                        : "You have not gotten blackjack yet.") << endl;
                do
                {
                    cout << "Play again? (Y/N)" << endl;
                    cin >> again;
                    if (again == 'N' || again == 'n')
                    {
                        cout << endl << "You are now exiting the program. Thanks "
                                "for playing at the Phalanx Casino!" << endl << endl;
                        cout << "Would you like to view (V) last session's stats?" << endl;
                        char stat;
                        cin >> stat;
                        if (stat == 'V' || stat == 'v')
                        {
                            cout << "Last session's stats: " << endl;
                            //Read file
                            ifstream file("winloss.txt");
                            string line;
                            while (getline(file, line)) 
                            {
                                cout << line << endl;
                            }
                            file.close();
                        }
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
    
    //Write to file
    ofstream outFile;
    outFile.open("winloss.txt");
    outFile << name << "'s stats: " << endl;
    outFile << "You have won " << win << " time(s), lost " << loss << " time(s), "
               "and tied " << tie << " time(s). Win rate: " << wRate << "%. " << endl;
    outFile << (bJ > 0 ? "You have gotten blackjack " + to_string(bJ) + " time(s)!" 
                : "You have not gotten blackjack yet.") << endl;
    outFile.close();
    
    return 0;
}


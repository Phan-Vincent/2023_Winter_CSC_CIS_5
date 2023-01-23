/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2019, 11:11 PM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char p1, p2; //Players 1 and 2, respectively
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> p1 >> p2;
    
    p1 = toupper(p1); //Convert to uppercase
    p2 = toupper(p2);
    
    if (p1 == p2) //Check for tie
    {
        cout << "Nobody wins." << endl; 
    }
    else if (p1 == 'R' && p2 == 'S' || p1 == 'S' && p2 == 'R') //R>S
    {
        cout << "Rock breaks scissors.";
    }
    else if (p1 == 'P' && p2 == 'R' || p1 == 'R' && p2 == 'P') //P>R
    {
        cout << "Paper covers rock.";
    }
    else if (p1 == 'S' && p2 == 'P' || p1 == 'P' && p2 == 'S') //S>P
    {
        cout << "Scissors cuts paper.";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

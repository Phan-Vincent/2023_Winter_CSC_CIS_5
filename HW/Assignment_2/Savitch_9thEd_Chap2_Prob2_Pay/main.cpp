/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 10:33 PM
 * Purpose:  Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prevSal, //Employee's previous salary in USD
          retro, //Retroactive pay in USD
          nwAnSal, //New annual salary in USD
          nwMonSal, //New monthly salary in USD
          payInc = 0.076; //Pay increase = 7.6%
          
          
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input previous annual salary." << endl;
    cin >> prevSal;
    
    retro = (prevSal * (1 + payInc) / 2) - (prevSal / 2);
    nwAnSal = prevSal * (1 + payInc);
    nwMonSal = nwAnSal / 12;
    //Display the outputs
cout << "Retroactive pay" << setw(5) << "=" << setw(2) << "$" << setw(7) << fixed << setprecision(2) << retro << endl;
cout << "New annual salary" << setw(3) << "=" << setw(2) << "$" << nwAnSal << endl;
cout << "New monthly salary" << setw(2) << "=" << setw(2) << "$" << setw(7) << nwMonSal;
    //Exit stage right or left!
    return 0;
}
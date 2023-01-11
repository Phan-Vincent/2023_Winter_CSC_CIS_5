/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 10:10 PM
 * Purpose: Calculate the military budget as a percentage of the federal budget.
 */

//System Libraries
#include <iostream> // I/O Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float milBdgt, fedBdgt, mlPrcnt;
    
    //Initialize Variables
    milBdgt = 7.77e11f; //Military budget = $777 billion
    fedBdgt = 6.272e12f; //Federal budget = $6.272 trillion
    mlPrcnt = milBdgt * 100 / fedBdgt;
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Military budget: $" << milBdgt << endl;
    cout << "Federal budget: $" << fedBdgt << endl;
    cout << "Military budget as a percentage of the federal budget: " << mlPrcnt
            << "%" << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


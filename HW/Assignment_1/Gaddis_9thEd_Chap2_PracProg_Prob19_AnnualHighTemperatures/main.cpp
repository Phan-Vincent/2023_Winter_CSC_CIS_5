/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 7:44 PM
 * Purpose: Find July high temperatures if temperatures rise by 2%.
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
    float oldNYC, //New York City's old average high temperature in July, all 
                   //in Fahrenheit
          oldDen, //Denver's old average high
          oldPho, //Phoenix's old average high
          newNYC, //NYC's new average high
          newDen, //Denver's new average high
          newPho, //Phoenix's new average high
          tempInc; //Temperature increase as a percentage
    
    //Initialize Variables
    oldNYC = 85;
    oldDen = 88;
    oldPho = 106;
    tempInc = .02;
    newNYC = oldNYC + oldNYC * tempInc;
    newDen = oldDen + oldDen * tempInc;
    newPho = oldPho + oldPho * tempInc;
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Average July High Temperatures (in Fahrenheit):" << endl;
    cout << "New York City: " << oldNYC << endl;
    cout << "Denver: " << oldDen << endl;
    cout << "Phoenix: " << oldPho << endl << endl;
    cout << "Average July High Temperatures after a 2% Increase in Temperature "
            "(in Fahrenheit):" << endl;
    cout << "New York City: " << newNYC << endl;
    cout << "Denver: " << newDen << endl;
    cout << "Phoenix: " << newPho << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


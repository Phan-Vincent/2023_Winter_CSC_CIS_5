/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 9, 2023, 4:36 PM
 * Purpose: Free Fall Calculation
 */

//System Libraries
#include <iostream> // I/O Library
#include <cstdlib> //Utilizes random numbers
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
float GRAVITY = 3.2174e1f; //Gravity 32.174 ft/s^2

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float drop, //Distance object falls
          tim; //Time in seconds
            
    //Initialize Variables
    tim = rand()%10 + 1; //Time from 1-10 seconds
    //tim = 1;
            
    //Map/Process the Inputs -> Outputs
    drop = 1.0f/2 * GRAVITY * tim * tim;
    //drop = 1/2 * GRAVITY * tim * tim; //Incorrect integer division
    //pow(tim,2)/2 = exp(2 * log(tim))/2; very expensive function for a simple square
    
    
    //Display Inputs/Outputs
    cout << "This program calculates distance in free fall." << endl;
    cout << "The time of drop = " << tim << " second(s)." << endl;
    cout << "The distance dropped = " << drop << " feet." << endl;
    
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


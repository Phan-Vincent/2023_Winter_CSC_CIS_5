/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 10:26 PM
 * Purpose:  Room
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
    short maxCap, //Max room capacity
          numPpl, //Number of people in room
          moreLes; //How many more or less people to continue complying with or comply with fire law
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << "Input the maximum room capacity and the number of people" << endl;
cin >> maxCap >> numPpl;
if (numPpl > maxCap) 
{
    moreLes = numPpl - maxCap;
    cout << "Meeting cannot be held." << endl;
    cout << "Reduce number of people by " << moreLes << " to avoid fire violation.";
    
}
else 
{
    moreLes = maxCap - numPpl;
    cout << "Meeting can be held." << endl;
    cout << "Increase number of people by " << moreLes << " will be allowed without violation.";
}

    //Exit stage right or left!
    return 0;
}
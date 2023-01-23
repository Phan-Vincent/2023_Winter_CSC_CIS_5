/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 11:02 PM
 * Purpose:  Insurance
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
    float value, //Value of home in USD
          insure; //How much insurance they need
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    
    //Display the outputs
cout << "Insurance Calculator" << endl;
cout << "How much is your house worth?" << endl;
cin >> value;
insure = 0.8 * value;
cout << "You need $" << insure << " of insurance.";
    //Exit stage right or left!
    return 0;
}
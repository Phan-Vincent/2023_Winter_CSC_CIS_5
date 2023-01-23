/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 11:01 PM
 * Purpose:  Convert F to C
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
    float fTemp, //Temperature in degrees fahrenheit
    cTemp; //Temperature in degrees celcius
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << "Temperature Converter" << endl;
cout << "Input Degrees Fahrenheit" << endl;
cin >> fTemp;
cTemp = 5 * (fTemp - 32) / 9;
cout << fixed << setprecision(1) << fTemp << " Degrees Fahrenheit = " << cTemp << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}
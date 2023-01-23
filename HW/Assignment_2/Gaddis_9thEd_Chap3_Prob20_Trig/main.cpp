/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 10:57 PM
 * Purpose:  Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    float sine,
    cosine,
    tangent,
    angle;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << "Calculate trig functions" << endl;
cout << "Input the angle in degrees." << endl;
cin >> angle;
sine = sin(angle * M_PI / 180); //Convert to radians
cosine = cos(angle * M_PI / 180);
tangent = tan(angle * M_PI / 180);
cout << "sin(" << angle << ") = " << fixed << setprecision(4) << sine << endl;
cout << "cos(" << fixed << setprecision(0) << angle << ") = " << fixed << setprecision(4) << cosine << endl;
cout << "tan(" << fixed << setprecision(0) << angle << ") = " << fixed << setprecision(4) << tangent;
    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 10:34 PM
 * Purpose:  Diet Coke
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
    float mMass = 35, //Mass of mouse in grams
          mDeath = 5, //Lethal dose of artificial sweetner for mice in grams
          lbs, //Weight at which dieter will stop dieting in lbs
          grams,
          hDeath,//Lethal dose for humans
          popMass = 350; //Mass of soda pop in grams
    
    float const SWEET = 0.001f;
    float artswe = popMass * SWEET; //Diet soda contains 1/10 of 1% artificial sweetner
    int max;
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
cout << "Input the desired dieters weight in lbs." << endl;
cin >> lbs;
grams = lbs * 453.592f; //1 lbs = 453.592 grams
hDeath = ( mDeath / mMass ) * grams, //Lethal dose for humans
max = hDeath / artswe; //Max number of soda cans they may drink
cout << "The maximum number of soda pop cans" << endl;
cout << "which can be consumed is " << fixed << setprecision(0) << max << " cans";

    //Exit stage right or left!
    return 0;
}
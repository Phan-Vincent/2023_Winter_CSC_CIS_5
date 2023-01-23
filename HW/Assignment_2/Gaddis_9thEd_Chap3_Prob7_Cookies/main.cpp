/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 11:04 PM
 * Purpose:  Cookies
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
    int cookie, //Calories in a cookie
          ate, //How many cookies they ate
          calorie; //How many calories they consumed
    
    //Initialize or input i.e. set variable values
    cookie = 75;
    
    //Map inputs -> outputs
    cin >> ate;
    calorie = cookie * ate;
    //Display the outputs
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cout << "You consumed " << calorie << " calories.";
    //Exit stage right or left!
    return 0;
}
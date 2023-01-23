/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2019, 10:37 PM
 * Purpose:  Retroactive Pay
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
    float payRate, //Pay in USD/hr
    hour, //Number of hours worked
    pay; //Paycheck in USD
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << "This program calculates the gross paycheck." << endl;
cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
cin >> payRate >> hour;
pay = payRate * hour;
if (hour > 40)
pay = (payRate * (hour - 40) * 2) + payRate * 40;
cout << "Paycheck = $" << fixed << setprecision(2) << setw(7) << pay;
    //Exit stage right or left!
    return 0;
}
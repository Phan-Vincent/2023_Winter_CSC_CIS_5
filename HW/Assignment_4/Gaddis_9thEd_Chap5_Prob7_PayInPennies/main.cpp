/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 3:50 PM
 * Purpose:  Pay in pennies.
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
    int days, ////Number of days worked
          pay = 1, //Starting pay of 1 cent on day one, doubling each day after
          total = 0; //Total compensation
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> days;
    
    if (days < 1) //Input validation
    {
        cout << "Please enter a number greater than 1.";
    }
    else
    {
        for (int i = 0; i < days; i++) 
        {
            total += pay; //Adds daily pay to total
            pay *= 2;     //Doubles pay each day
        }
    }
    
    //Display the outputs
    cout << "Pay" << setw(2) << "=" << setw(2) << "$" << fixed << setprecision(2) << setw(4) <<  total * 0.01; //Outputs and converts back to pennies
    //Exit stage right or left!
    return 0;
}
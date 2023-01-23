/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 16, 2023, 10:25 PM
 * Purpose:  Sums
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
    int num, //Input of numbers
          posSum = 0, //Sum of positive numbers
          negSum = 0, //Sum of negative numbers
          totSum = 0; //Total sum of all numbers
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        
        if (num > 0)
        {
            posSum += num;
        }
        else 
        {
            negSum += num;
        }
        totSum += num;
    }
    //Display the outputs
    cout << "Negative sum = " << setw(3) << negSum << endl;
    cout << "Positive sum = " << setw(3) << posSum << endl;
    cout << "Total sum" << setw(5) << "=" << setw(4) << totSum;
    //Exit stage right or left!
    return 0;
}
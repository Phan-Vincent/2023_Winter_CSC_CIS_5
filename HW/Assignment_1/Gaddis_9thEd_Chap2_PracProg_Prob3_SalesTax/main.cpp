/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 8:16 PM
 * Purpose: Compute the total sales tax.
 */

//System Libraries
#include <iostream> // I/O Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float prchs, //Purchase price in USD
          stateT, //State sales tax of 4%
          ctyTax, //County sales tax of 2%
          totTax; //Total sales tax
    
    //Initialize Variables
    prchs = 95;
    stateT = 0.04;
    ctyTax = 0.02;
    totTax = stateT * prchs + ctyTax * prchs;
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Purchase amount: $" << prchs << endl;
    cout << "State Tax: " << stateT << "%" << endl;
    cout << "County Tax: " << ctyTax << "%" << endl;
    cout << "Total Sales Tax: $" << totTax << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


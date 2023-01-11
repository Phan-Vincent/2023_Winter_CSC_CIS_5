/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January , 2023,  PM
 * Purpose: Calculate an employee's annual pay.
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
    int payAmount, payPeriods, annualPay;
    
    
    //Initialize Variables
    payAmount = 2200; //Employee's biweekly paycheck in USD
    payPeriods = 26; //Employee is paid 26 times per year
    annualPay = payAmount * payPeriods; //Employee's annual income in USD
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Employee's biweekly paycheck: $" << payAmount << endl;
    cout << "Number of times employee is paid per year: " << payPeriods << endl;
    cout << "Employee's annual pay: $" << annualPay << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


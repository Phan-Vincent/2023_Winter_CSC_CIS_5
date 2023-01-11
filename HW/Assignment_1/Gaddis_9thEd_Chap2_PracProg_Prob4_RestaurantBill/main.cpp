/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 8:29 PM
 * Purpose: Compute the tax and tip on a restaurant bill.
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
    float mealCos, tax, subTot, tip, taxRate, tipRate, total;
    
    //Initialize Variables
    mealCos = 88.67; //Meal cost in USD
    taxRate = 0.0675; //Tax of 6.75%
    tax = mealCos * taxRate; //Tax in USD
    subTot = mealCos + tax; //Restaurant bill after taxes, in USD
    tipRate = 0.20; //20% tip
    tip = tipRate * subTot; //Tip is 20%, calculated after tax, in USD
    total = mealCos + tax + tip; //Total restaurant bill in USD
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Meal cost: $" << mealCos << endl;
    cout << "Tax rate: " << taxRate * 100 << "%" << endl;
    cout << "Tax amount: $" << tax << endl;
    cout << "Subtotal (after tax): $" << subTot << endl;
    cout << "Tip rate: " << tipRate * 100 << "%" << endl;
    cout << "Tip amount: $" << tip << endl;
    cout << "Total bill: $" << total << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


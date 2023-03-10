/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 5:53 PM
 * Purpose: Predict how much the East Coast division will generate in sales.
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
    float percent, //Percentage of total sales generated by East Coast division
            tSales, //Total sales by the company this year
            predic; //Sales prediction for East Coast division
    //Initialize Variables
    percent = 0.58; //East Coast division generates 58% of total sales
    tSales = 8.6e6; //Total sales of $8.6 million this year
    predic = percent * tSales; //58% of $8.6M
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Percentage of total sales by East Coast Division: " << percent << 
            endl;
    cout << "Total sales: $" << tSales << endl;
    cout << "Sales prediction: $" << predic << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


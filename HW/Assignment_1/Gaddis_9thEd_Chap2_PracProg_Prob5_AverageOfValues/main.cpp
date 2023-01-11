/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 9:06 PM
 * Purpose: Store 5 values, then store their sum, then find their average.
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
    float num1, num2, num3, num4, num5, sum, avg;
    
    //Initialize Variables
    num1 = 28;
    num2 = 32;
    num3 = 37;
    num4 = 24;
    num5 = 33;
    sum = num1 + num2 + num3 + num4+ num5; //Sum of num(1-5)
    avg = sum / 5; //Average of num(1-5)
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 
            << ", " << num5 << "." << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


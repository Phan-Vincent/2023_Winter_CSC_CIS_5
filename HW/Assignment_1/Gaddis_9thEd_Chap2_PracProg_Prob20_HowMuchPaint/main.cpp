/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 10, 2023, 7:20 PM
 * Purpose: Find how many gallons of paint is needed for two coats for a 6 ft by
 *          100 ft fence if each gallon covers 340 sq ft.
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
    float pntCov, //Amount of coverage provided by a gallon of paint
          pntGal, //Number of gallons of paint needed
          fHeight, //Fence height
          fLength, //Fence length
          fArea; //Area of fence
    //Initialize Variables
    pntCov = 340; //One gallon covers 340 sq ft
    fHeight = 6; //In feet
    fLength = 100; //In feet
    fArea = fHeight * fLength;
    pntGal = 2 * fArea / pntCov; //Two coats of paint needed
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout << "One gallon of paint covers about " << pntCov << " square feet." << 
            endl;
    cout << "Height of fence: " << fHeight << " feet." << endl;
    cout << "Length of fence: " << fLength << " feet." << endl;
    cout << "Area of fence: " << fArea << " square feet." << endl;
    cout << "Approximate number of gallons of paint needed for two coats: " << 
            pntGal << endl;
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


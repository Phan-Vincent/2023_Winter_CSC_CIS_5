/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 13, 2023, 10:34 PM
 * Purpose: Find the best gas station to fill up at.
 */

//System Libraries
#include <iostream> // I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float mpg, gasTank, gauge, toFill, dist1, dist2, gasTo1, gasTo2, price1,
            price2, cost1, cost2;
    
    
    //Initialize Variables
    mpg = 16; //Miles per gallon
    gasTank = 22; //Size of gas tank in gallons
    gauge = 0.25; //Fuel gauge reading
    toFill = gasTank * (1 - gauge); //Gallons needed to fill fuel tank
    
    //Map/Process the Inputs -> Outputs
   
    //Station 1:
    dist1 = 10; //Distance from Station 1 in miles
    gasTo1 = dist1 / mpg; //Gas used to get to Station 1
    price1 = 3.85; //Price in USD per gallon
    cost1 = price1 * (toFill + gasTo1); //Total cost of refueling at Station 1
    
    //Station 2:
    dist2 = 0.5; //Distance from Station 2 in miles
    gasTo2 = dist2 / mpg; //Gas to get to Station 2 in miles
    price2 = 3.95; //Price in USD per gallon
    cost2 = price2 * (toFill + gasTo2); //Total cost at Station 2
    
    //Display Inputs/Outputs
    cout << "Miles per gallon: " << mpg << endl;
    cout << "Fuel tank capacity in gallons: " << gasTank << endl;
    cout << "Current fuel gauge reading: " << gauge << endl;
    cout << "Gallons of gas needed to fill fuel tank: " << toFill << endl <<
            endl;
    
    cout << "Distance from Station 1 in miles: " << dist1 << endl;
    cout << "Gas needed to get to Station 1 (in gallons): " << gasTo1 << endl;
    cout << "Price per gallon at Station 1: $" << price1 << endl;
    cout << "Total cost of refueling at Station 1: $" << fixed << setprecision(2)
            << cost1 << endl << endl;
    
    cout << "Distance from Station 2 in miles: " << dist2 << endl;
    cout << "Gas needed to get to Station 2 (in gallons): " << gasTo2 << endl;
    cout << "Price per gallon at Station 2: $" << price2 << endl;
    cout << "Total cost of refueling at Station 2: $" << fixed << setprecision(2) 
            << cost2 << endl << endl;
    
    cout << "In this scenario, Station 2 is best.";
    
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


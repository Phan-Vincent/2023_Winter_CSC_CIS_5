/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 5:18 PM
 * Purpose:  MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float LINGAL = 0.264179; //A liter is 0.264179 gallons

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float liters, //Input in liters
          miles, //Input in miles
          gallons,
          mpg; //Miles per gallon
    char again; //Repeat?
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do //One loop guarenteed
    {
        cout << "Enter number of liters of gasoline:" << endl << endl;
        cin >> liters;
        gallons = liters / LINGAL;
        cout << "Enter number of miles traveled:" << endl << endl;
        cin >> miles;
        mpg = miles / liters / 0.264179;
        cout << "miles per gallon:" << endl;
        cout << fixed << setprecision(2) << mpg << endl;
        cout << "Again:" << endl;
        cin >> again;
        
        if (again == 'y' || again == 'Y') //Double new line only if looping again
        {
            cout << endl;
        }
        
    } while (again == 'y' || again == 'Y');
    //Display the outputs
    
    //Exit stage right or left!
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}
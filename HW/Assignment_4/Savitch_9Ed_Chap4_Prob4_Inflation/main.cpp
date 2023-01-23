/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 6:54 PM
 * Purpose:  Rate of Inflation
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
    float cPrice, //Current price in USD
          pPrice, //Price 1 year ago
          iRate;  //Inflation rate
    char again;   //Repeat?
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do
    {
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        cout << "Enter year-ago price:" << endl;
        cin >> pPrice;
        iRate = ((cPrice - pPrice) / pPrice) * 100;
        cout << "Inflation rate: " << fixed << setprecision(2) << iRate << "%" << endl << endl;
        cout << "Again:" << endl;
        cin >> again;
        
        if (again == 'y' || again == 'Y') //Double new line only if looping again
        {
            cout << endl;
        }
    } while (again == 'y' || again == 'Y');
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
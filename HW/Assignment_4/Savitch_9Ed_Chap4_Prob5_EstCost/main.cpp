/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 7:05 PM
 * Purpose:  Rate of Inflation -> Estimated Cost
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
    float cPrice,  //Current price in USD
          pPrice,  //Price 1 year ago
          oneYear, //Future predicted price in 1 year
          twoYear, //Predicted price in 2 years
          iRate;   //Inflation rate
    char again;    //Repeat?
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do
    {
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        cout << "Enter year-ago price:" << endl;
        cin >> pPrice;
        iRate = ((cPrice - pPrice) / pPrice);
        cout << "Inflation rate: " << fixed << setprecision(2) << iRate * 100 << "%" << endl << endl;
        oneYear = cPrice + cPrice * iRate;
        twoYear = oneYear + oneYear * iRate;
        cout << "Price in one year: $" << oneYear << endl;
        cout << "Price in two year: $" << twoYear << endl << endl;
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
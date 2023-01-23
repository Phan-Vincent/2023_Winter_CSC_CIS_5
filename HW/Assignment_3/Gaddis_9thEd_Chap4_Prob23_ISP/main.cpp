/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2023, 10:30 PM
 * Purpose:  ISP Bill
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
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
    char pckge, //Package selected
         A,// = 9.95, //Package A = $9.95/month, 10 hours provided, additional is $2/hr
         B,// = 14.95, //B = $14.95/mon, 20 hours, $1/hr
         C;// = 19.95, //C = $19.95/mon, unlimited
    float bill, //Monthly bill
          hrs; //Hours used
           
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> pckge >> hrs;
    
    if (pckge != 'A' && pckge != 'B' && pckge != 'C') //Input validation
    {
        cout << "Please enter A, B, or C." << endl;
    }
    if (hrs > 744) //Input validation
    {
        cout << "Error: There are only 744 hours maximum in one month." << endl;
    }
    switch (pckge)
    {
        case 'A': //Package A
            bill = 9.95;
            if (hrs > 10) //First 10 free
            {
                bill = 9.95 + (hrs - 10) * 2;
            }
            break;
        case 'B': //Package B
            bill = 14.95;
            if (hrs > 20) //20 free
            {
                bill = 14.95 + (hrs - 20);
            }
            break;
        case 'C': //Package C, unlimited hours
            bill = 19.95;
            break;
    }
    
    //Display the outputs
    cout << "Bill" << setw(2) << "=" << setw(2) << "$" << setw(6) << bill;
    //Exit stage right or left!
    return 0;
}
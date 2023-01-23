/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 3:35 PM
 * Purpose:  Sum of all numbers up to the entered number.
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
    short num, //User's entered number
          sum = 0; //Sum of all numbers up to the entered number
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> num;
    if (num >= 0)    
        for (int i = 0; i <= num; i++)
        {
            sum += i;
        }
    else
    {
        cout << "Please enter a positive number.";
    }
    
    //Display the outputs
    cout << "Sum" << setw(3) << "= " << sum;
    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 5:01 PM
 * Purpose:  Pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num; //Pattern length
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> num;
    
    for (int i = 1; i <= num; i++)
    {
        for (int a = 0; a < i; a++)
        {
            cout << "+";
        }
        cout << endl << endl;
    }
    for (int i = num; i >= 1; i--)
    {
        for (int a = 0; a < i; a++)
        {
            cout << "+";
        }
        if (i != 1) //No new line after last loop
        {
            cout << endl << endl;
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 4:39 PM
 * Purpose:  MinMax
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
    short min, //Smallest number entered
          max, //Largest number entered
          num; //Numbers to be input
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> num;
    
    while (num != -99) //Loops until user enters -99
    {
        if (num > max) 
        {
            max = num;
        }
        
        if (num < min) 
        {
            min = num;
        }
        
        cin >> num;
    }
    
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
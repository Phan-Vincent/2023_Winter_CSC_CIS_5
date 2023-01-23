/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 23, 2023, 7:16 PM
 * Purpose:  Maximum of first 2 parameters then maximum of 3 parameters
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
    float num1, //User inputs
          num2,
          num3,
          big2, //Largest number of first 2 parameters
          big3; //Largest of 3 parameters
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Enter first number:" << endl << endl;
    cin >> num1;
    cout << "Enter Second number:" << endl << endl;
    cin >> num2;
    cout << "Enter third number:" << endl << endl;
    cin >> num3;
    
    if (num1 > num2) //1>2
    {
        big2 = num1;
        if (num3 > num1) //3>1>2
        {
            big3 = num3;
        }
        else //1>3
        {
            big3 = num1;
        }
    }
    else //2>1
    {
        big2 = num2;
        if (num3 > num2) //3>2
        {
            big3 = num3;
        }
        else //2>3
        {
            big3 = num2;
        }
    }
    
    //Display the outputs
    cout << "Largest number from two parameter function:" << endl;
    cout << big2 << endl << endl;
    
    cout << "Largest number from three parameter function:" << endl;
    cout << big3 << endl;
    //Exit stage right or left!
    return 0;
}
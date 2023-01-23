/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 4:51 PM
 * Purpose:  Rectangle
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
    int side; //Rectangle side length
    char letter; //Character to make rectangle out of
    
    //Initialize or input i.e. set variable values
    cin >> side >> letter;
    
    if (side < 1 || side > 15) //Input validation
    {
        cout << "Please enter a positive integer less than or equal to 15.";
    }
    else
    {
        for (int i = 0; i < side; i++)
        {
            for (int a = 0; a < side; a++)
            {
                cout << letter;
            }
            if (i != side - 1) //No new line at the last loop
            {
                cout << endl;
            }
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
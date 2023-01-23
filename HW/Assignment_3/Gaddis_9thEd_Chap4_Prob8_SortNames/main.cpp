/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2023, 5:51 PM
 * Purpose:  Sort names alphabetically
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string nam1, nam2, nam3; //Placeholders for 3 names
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> nam1 >> nam2 >> nam3;
    
    if (nam1 > nam2) //Currently: 123
    {
        swap(nam1, nam2); //213
    }
    if (nam1 > nam3) //Currently: 123 or 213
    {
        swap(nam1, nam3); //321 or 231
    }
    if (nam2 > nam3) //Currently: 123, 213, 321, or 231
    {
        swap(nam2, nam3); //132, 312, 231, 321
    }
    //123, 132, 213, 231, 312, 321
    //Display the outputs
cout << nam1 << endl;
cout << nam2 << endl;
cout << nam3;


    //Exit stage right or left!
    return 0;
}
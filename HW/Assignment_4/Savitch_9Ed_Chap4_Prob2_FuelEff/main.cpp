/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 6:36 PM
 * Purpose:  Fuel Efficiency
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
    float liters1, //Input in liters for car 1
          liters2, //Liters for car 2
          miles1, //Input in miles
          miles2,
          gallons,
          mpg1, //Miles per gallon for car 1
          mpg2; //MPG for car 2
    char again; //Repeat?
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do //One loop guarenteed
    {
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters1;
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles1;
        mpg1 = miles1 / liters1 / 0.264179;
        cout << "miles per gallon: " << fixed << setprecision(2) << mpg1 << endl << endl;
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> liters2;
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles2;
        mpg2 = miles2 / liters2 / 0.264179;
        cout << "miles per gallon: " << fixed << setprecision(2) << mpg2 << endl << endl;
        
        if (mpg1 > mpg2) //Car 1 is more fuel efficient
            {
                cout << "Car 1 is more fuel efficient" << endl << endl;
            }
        else //Car 2 is more efficient
            {
                cout << "Car 2 is more fuel efficient" << endl << endl;
            }
        
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
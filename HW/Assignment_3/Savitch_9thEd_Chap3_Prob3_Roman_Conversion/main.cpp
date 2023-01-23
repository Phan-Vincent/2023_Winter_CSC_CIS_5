/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2023, 11:28 PM
 * Purpose:  Roman Conversion
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
    short year,
          n1,// = year % 10,
          n10,// = (year / 10) % 10,
          n100,// = (year / 100) % 10,
          n1000;// = (year / 1000) % 10;
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> year;
    
    //How many:
    n1 = year % 10; //1s
    n10 = (year / 10) % 10; //10s
    n100 = (year / 100) % 10; //100s
    n1000 = (year / 1000) % 10; //1000s
    
    if (year <= 1000 || year >= 3000) //Input validation: 1000-3000
    {
        cout << year << " is Out of Range!";
        return 0;
    }
    else //Valid
    {
        cout << year << " is equal to ";
        for (int i = 0; i < n1000; i++) //1000s
        {
            cout << "M";
        }
        if (n100 == 9) //900
        {
            cout << "CM";
        }
        else if (n100 >= 5) //500+
        {
            cout << "D";
            for (int i = 0; i < n100 - 5; i++) //600-800
            {
                cout << "C";
            }
        }
        else if (n100 == 4) //400
        {
            cout << "CD";
        }
        else
        {
            for (int i = 0; i < n100; i++) //100-300
            {
                cout << "C";
            }
        }
        if (n10 == 9) //90
        {
            cout << "XC";
        }
        else if (n10 >= 5) //50+
        {
            cout << "L";
            for (int i = 0; i < n10-5; i++) //60-80
            {
                cout << "X";
            }
        }
        else if (n10 == 4) //40
        {
            cout << "XL";
        }
        else 
        {
            for (int i = 0; i < n10; i++) //10-30
            {
                cout << "X";
            }
        }
        if (n1 == 9) //9
        {
            cout << "IX";
        }
        else if (n1 >= 5) //5+
        {
            cout << "V";
            for (int i =0; i < n1-5; i++) //6-8
            {
                cout << "I";
            }
        }
        else if (n1 == 4) //4
        {
            cout << "IV";
            for (int i =0; i < n1-5; i++) //1-3
            {
                cout << "I";
            }
        }
        else
        {
            for (int i = 0; i < n1; i++) //Last 1s
            {
                cout << "I";
            }
        }
    }    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

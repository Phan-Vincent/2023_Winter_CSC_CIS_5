/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 19, 2023, 1:09 PM
 * Purpose:  Zodiac Signs
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
    string sign1, sign2; //Zodiac signs
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;
    
    if (sign1 == sign2) //Check for same zodiac
    {
        if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") //Fire signs
        {
            cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
        }
        else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") //Earth
        {
            cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        }
        else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") //Air
        {
            cout << sign1 << " and " << sign2 << " are compatible Air signs.";
        }
        else //Water
        {
            cout << sign1 << " and " << sign2 << " are compatible Water signs."; //WATER (Cancer, Scorpio, Pisces)
        }
    }
    else //Different but compatible
    {
        if ((sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
        && (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")) //Compatible Fire
        {
            cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
        }
        else if ((sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") 
        && (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")) //Compatible Earth
        {
            cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        }
        else if ((sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") 
        && (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")) //Compatible Air
        {
            cout << sign1 << " and " << sign2 << " are compatible Air signs.";
        }
        else if ((sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") 
        && (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")) //Compatible Water
        {
            cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        }
        else //Different and incompatible
        {
            cout << sign1 << " and " << sign2 << " are not compatible signs.";
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
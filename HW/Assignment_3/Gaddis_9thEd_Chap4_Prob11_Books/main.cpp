/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2023, 6:20 PM
 * Purpose:  Monthly book purchases and point accumulation
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    short numBook, //Number of books purchased
          points; //Points earned from book purchases
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
cout << "Book Worm Points" << endl;
cout << "Input the number of books purchased this month." << endl;
cin >> numBook;

if (numBook == 0) //0 purchases
{
    points = 0;
}

if (numBook == 1) //1 purchased
{
    points = 5;
}

if (numBook == 2) //2
{
    points = 15;
}

if (numBook == 3) //3
{
    points = 30;
}

if (numBook >= 4) //4 or more
{
    points = 60;
}

    //Display the outputs
cout << "Books purchased" << setw(2) << "=" << setw(3) << numBook << endl;
cout << "Points earned" << setw(4) << "=" << setw(3) << points;

    //Exit stage right or left!
    return 0;
}
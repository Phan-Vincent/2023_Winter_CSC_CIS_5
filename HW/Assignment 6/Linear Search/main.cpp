/* 
 * File:   main.cpp
 * Author:      Vincent Phan
 * Created on:  February 6, 2023, 9:00 PM
 * Purpose:     Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int,int&);

void fillAry(int arr [],int size)
{
    int num = 0;
    for(int i = 0; i < size; i++)
    {
        cin >> num;
        arr[i] = num;
    }
}
void prntAry(int arr [],int size,int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            cout << arr[i+j] << " ";
        }
        cout << endl;
    }
}
bool linSrch(int arr [],int size,int value,int& index)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            index = i;
            return(index);
        }
    }
    return(-1);
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE = 100;
    int array[SIZE];
    int indx,
        val;
    
    //Initialize or input i.e. set variable values
    val = 50;
    fillAry(array,SIZE);
    
    //Display the outputs
    //prntAry(array,SIZE,10);
    if(linSrch(array,SIZE,val,indx))
        cout << val << " was found at indx = " << indx << endl;
    
    //Exit stage right or left!
    return 0;
}
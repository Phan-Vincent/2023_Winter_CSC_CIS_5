/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 9:15 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char num1, num2, num3, num4;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> num1 >> num2 >> num3 >> num4;
    
    //Histogram Here
cout << num4 << " ";
    if (num4 >= '0' && num1 <= '9') 
    {
        for (int i = 0; i < num4 - '0'; i++) 
        {
            cout << "*";
        }
    } 
    else 
    {
        cout << "?";
    }
    cout << endl;
    
    cout << num3 << " ";
    if (num2 >= '0' && num3 <= '9') 
    {
        for (int i = 0; i < num3 - '0'; i++) 
        {
            cout << "*";
        }
    } 
    else 
    {
        cout << "?";
    }
    cout << endl;
    
    cout << num2 << " ";
    if (num3 >= '0' && num2 <= '9') 
    {
        for (int i = 0; i < num2 - '0'; i++) 
        {
            cout << "*";
        }
    } 
    else 
    {
        cout << "?";
    }
    cout << endl;
    
    cout << num1 << " ";
    if (num4 >= '0' && num1 <= '9') 
    {
        for (int i = 0; i < num1 - '0'; i++) 
        {
            cout << "*";
        }
    } 
    else 
    {
        cout << "?";
    }
    cout << endl;
    
    
    //Exit
    return 0;
}
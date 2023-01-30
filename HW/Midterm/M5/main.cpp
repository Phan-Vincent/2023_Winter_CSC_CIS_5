/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 5:34 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate,
          pay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if (hrsWrkd > 40)
    {
        pay = payRate * 20 + payRate * 1.5 * 20 + (hrsWrkd - 40) * payRate * 2;
    }
    else if (hrsWrkd <= 40 && hrsWrkd > 20)
    {
        pay = payRate * 20 + (hrsWrkd - 20) * payRate * 1.5;
    }
    else
    {
        pay = payRate * hrsWrkd;
    }
    //Output the check
    cout << "$" << fixed << setprecision(2) << pay << endl;
    
    //Exit
    return 0;
}
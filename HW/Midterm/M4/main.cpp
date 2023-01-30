/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 5:53 PM
 * Purpose:  ISP charges
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
    char package;
    unsigned short hours;
    float charge,
          saveA=0,
          saveB=0,
          saveC=0;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    /*
      a)  $16.99 per month, 10 hours access.  Additional hours
        are $0.95 up to 20 hours then $0.85 for all additional
        hours.
    b)  $26.99 per month, 20 hours access.  Additional hours
        are $0.74 up to 30 hours then $0.64 for each
        hour above this limit.
    c)  $36.99 per month unlimited access
    */
    if (package == 'A' || package == 'a')
    {
        if (hours <= 10)
        {
            charge = 16.99;// + (hours - 10) * 0.95;
        }
        else if (hours > 10 && hours <= 20)
        {
            charge = 16.99 + (hours - 10) * 0.95;
        }
        else
        {
            charge = 16.99 + (10 * 0.95) + (hours - 20) * 0.85;
            saveB = charge - 26.99 - (hours - 20) * 0.74;
            saveC = charge - 36.99;
        }
        cout << "$" << fixed << setprecision(2) << charge << " ";
        if (saveB > saveC)
        {
            cout << "B $" << saveB << endl;
        }
        else if (saveC > saveB)
        {
            cout << "C $" << saveC << endl;
        }
        else
        {
            cout << "A $0.00" << endl;
        }
    }
    else if (package == 'B' || package == 'b')
    {
        if (hours <= 20)
        {
            charge = 26.99;
            saveA = charge - 16.99;
        }
        else if (hours > 20 && hours <= 30)
        {
            charge = 26.99 + (hours - 20) * 0.74;
        }
        else
        {
            charge = 26.99 + 10 * 0.74 + (hours - 30) * 0.64;
            saveC = charge - 36.99;
        }
        cout << "$" << fixed << setprecision(2) << charge << " ";
        if (saveA > saveC)
        {
            cout << "A $" << saveA << endl;
        }
        else if (saveC > saveA)
        {
            cout << "C $" << saveC << endl;
        }
        else
        {
            cout << "B $0.00" << endl;
        }
    }
    else
    {
        charge = 36.99;
        cout << "$" << fixed << setprecision(2) << charge << " ";
        if (hours <= 20)
        {
            saveA = charge - 16.99;
            cout << "A $" << saveA << endl;
        }
        else if (hours <= 34)
        {
            saveB = charge - 26.99;
            cout << "B $" << saveB << endl;
        }
        else
        {
            cout << "C $0.00" << endl;
        }
    }
    
    //Output the Charge
    

    //Output the cheapest package and the savings
    /*if (saveA >= 0 && saveA > saveB && saveA > saveC)
    {
        cout << "A $" << saveA << endl;
    }
    else if (saveB >= 0 && saveB > saveA && saveB > saveC)
    {
        cout << "B $" << saveB << endl;
    }
    else if (saveC >= 0 && saveC > saveA && saveC > saveB)
    {
        cout << "C $" << saveC << endl;
    }
    */
    //Exit
    return 0;
}
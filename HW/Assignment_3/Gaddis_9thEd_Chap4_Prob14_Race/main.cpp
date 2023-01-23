/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2023, 7:20 PM
 * Purpose:  Sort runners by shortest time to complete race
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
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
    string run1, run2, run3, //Runners' names
           frst, scnd, thrd; //1st, 2nd, 3rd place
    short time1, time2, time3, //Runners' times
          frstTim, scndTim, thrdTim; //1st, 2nd, 3rd place times
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    
    cin >> run1;
    cin.ignore(1) >> time1; //Grab names, ignore whitespace, grab times
    cin >> run2;
    cin.ignore(1) >> time2;
    cin >> run3;
    cin.ignore(2) >> time3;
    
    if (time1 < time2 && time1 < time3) //Runner 1 = 1st place
    {
        frst = run1;
        frstTim = time1;
        if (time2 < time3) //1, 2, 3
        {
            scnd = run2; 
            scndTim = time2;
            thrd = run3;
            thrdTim = time3;
        }
        else //1, 3, 2
        {
            scnd = run3;
            scndTim = time3;
            thrd = run2;
            thrdTim = time2;
        }
    }
    else if (time2 < time1 && time2 < time3) // 2 = 1st place
    {
        frst = run2;
        frstTim = time2;
        if (time1 < time3) //2, 1, 3
        {
            scnd = run1;
            scndTim = time1;
            thrd = run3;
            thrdTim = time3;
        }
        else //2, 3, 1
        {
            scnd = run3;
            scndTim = time3;
            thrd = run1;
            thrdTim = time1;
        }
    }
    else if (time3 < time1 && time3 < time2) //3 = 1st place
    {
        frst = run3;
        frstTim = time3;
        if (time1 < time2) //3, 1, 2
        {
            scnd = run1;
            scndTim = time1;
            thrd = run2;
            thrdTim = time2;
        }
        else //3, 2, 1
        {
            scnd = run2;
            scndTim = time2;
            thrd = run1;
            thrdTim = time1;
        }
        
    }
    //Display the outputs
    cout << frst << "\t" << setw(3) << frstTim << endl;
    cout << scnd << "\t" << setw(3) << scndTim << endl;
    cout << thrd << "\t" << setw(3) << thrdTim;


    //Exit stage right or left!
    return 0;
}
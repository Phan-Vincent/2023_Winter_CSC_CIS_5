/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 18, 2023, 6:50 PM
 * Purpose:  Monthly bank charge
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    float balance, //Bank balance in USD
          checks, //Number of checks
          chkFee, //Checking fee in USD
          monFee = 10, //Monthly fee of $10
          lowBal, //Low balance fee of $15 if balance < $400
          newBal, //Bank balance after all fees in USD
          cFeeRate; //Checks fee rate
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
cout << "Monthly Bank Fees" << endl;
cout << "Input Current Bank Balance and Number of Checks" << endl;
cin >> balance >> checks;

if (checks < 0) //Check input validation
{
    cout << "Please enter a number greater than 0 for checks." << endl;
}

if (balance < 400)
{
    lowBal = 15; //Balance < $400 = fee of $15
    if (balance < 0) //Negative account balance
    {
        cout << "URGENT: ACCOUNT IS OVERDRAWN." << endl; //Urgent warning
    }
}
else 
    {
        lowBal = 0; //No fee if balance >= $400
    }

if (checks < 20)
{
        cFeeRate = 0.10; //Check fee of 10 cents per check when checks < 20
}

if (checks <= 39 && checks >= 20)
{
    cFeeRate = 0.08; //Check fee of 8 cents when checks = 20 to 39
}

if (checks <= 59 && checks >= 40)
{
    cFeeRate = 0.06; //Check fee of 6 cents when checks = 40 to 59
}

if (checks >= 60) //Check fee of 4 cents when checks is 60 or more
{
    cFeeRate = 0.04;
}

chkFee = checks * cFeeRate;
newBal = balance - chkFee - monFee - lowBal;
    //Display the outputs
cout << "Balance" << setw(6) << "$" << setw(9) << fixed << setprecision(2) << balance << endl;
cout << "Check Fee" << setw(4) << "$" << setw(9) << chkFee << endl;
cout << "Monthly Fee" << setw(2) << "$" << setw(9) << monFee << endl;
cout << "Low Balance" << setw(2) << "$" << setw(9) << lowBal << endl;
cout << "New Balance" << setw(2) << "$" << setw(9) << newBal;
    //Exit stage right or left!
    return 0;
}
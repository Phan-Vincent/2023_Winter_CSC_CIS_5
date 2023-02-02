/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 6:02 PM
 * Purpose:  isPrime
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int num)//Determine if the input number is prime.
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "Input a number to test if Prime." << endl;
    cin >> number;
    
    //Output data
    if (isPrime(number))
    {
        cout << number << " is prime.";
    }
    else
    {
        cout << number << " is not prime.";
    }
    //Exit stage right!
    return 0;
}
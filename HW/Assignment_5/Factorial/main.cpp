/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 5:47 PM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int n)//Function to write for this problem
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "This program calculates the factorial using a function prototype "
            "found in the template for this problem." << endl;
    cout << "Input the number for the function." << endl;
    cin >> num;
    //Output data
    cout << num << "! = " << fctrl(num);
    //Exit stage right!
    return 0;
}
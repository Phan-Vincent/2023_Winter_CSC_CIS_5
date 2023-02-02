/* 
 * Author: Vincent Phan
 * Created on January 31, 2023, 7:20 PM
 * Purpose:  Present Value
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

//Function prototypes
float psntVal(float f, float r, int n) //Present value formula
{
    return f / pow(1 + (r / 100), n);
}

using namespace std;
int main() {
    
    //Declare variables
    float futVal, intrst;
    short years;
    
    cout << "This is a Present Value Computation" << endl;
    cout << "Input the Future Value in Dollars" << endl;
    cin >> futVal;
    cout << "Input the Number of Years" << endl;
    cin >> years;
    cout << "Input the Interest Rate %/yr" << endl;
    cin >> intrst;
    
    float present = psntVal(futVal, intrst, years); //Call present value function
    
    cout << "The Present Value = $" << fixed << setprecision(2) << present;
    
    return 0;
}
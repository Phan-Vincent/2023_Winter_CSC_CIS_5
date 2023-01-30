/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 10:02 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int factor(int n)
{
    float result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx = 0,term;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    for (int i = 0; i < nterms; i++)
    {
        int expnt = 2 * i + 1;
        float numer = pow(x, expnt);
        float denom = factor(expnt);
        float nterms = numer / denom;
        if (i % 2 == 0)
        {
            fx += nterms;
        }
        else 
        {
            fx -= nterms;
        }
    }
    
    //Output the result here
    cout << fixed << setprecision(6) << fx << endl;
    
    //Exit
    return 0;
}
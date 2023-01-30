/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 9:30 PM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string convert(int number) //Convert a number to English
{
    //Store conversions of numbers
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string result = "";
    if (number >= 1000) 
    {
        result += ones[number / 1000] + " Thousand ";
        number %= 1000;
    }
    if (number >= 100) 
    {
        result += ones[number / 100] + " Hundred ";
        number %= 100;
    }
    if (number >= 20) 
    {
        result += tens[number / 10] + " ";
        number %= 10;
    }
    if (number > 0) 
    {
        result += ones[number];
    }
    return result;
}
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    if (number < 1 || number > 3000) 
    {
        cout << "Invalid input. Number should be between 1 and 3000." << endl;
        return 0;
    }
    string english = convert(number);
    
    //Output the check value
    cout << english << " and no/100's Dollars" << endl;
    
    //Exit
    return 0;
}
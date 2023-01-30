/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 11:20 PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int factor(int n)
{
    float result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
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
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    if (x % 2 == 0) 
    {
        for (int i = 1; i <= x; i++) 
        {
            for (int j = 1; j <= x; j++) 
            {
                if (shape == 'x') 
                {
                    if (i == j || i == x - j + 1) 
                    {
                        cout << i;
                    } 
                    else 
                    {
                        cout << " ";
                    }
                }
                else if (shape == 'b') 
                {
                    if (i == j) 
                    {
                        cout << i;
                    } 
                    else 
                    {
                        cout << " ";
                    }
                }
                else if (shape == 'f') 
                {
                    if (i == x - j + 1) 
                    {
                        cout << i;
                    } 
                    else 
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    } 
    else 
    {
        for (int i = x; i >= 1; i--) 
        {
            for (int j = 1; j <= x; j++) 
            {
                if (shape == 'x') 
                {
                    if (i == j || i == x - j + 1) 
                    {
                        cout << i;
                    } 
                    else 
                    {
                        cout << " ";
                    }
                }
                else if (shape == 'f') 
                {
                    if (i == j) 
                    {
                        cout << i;
                    } 
                    else 
                    {
                        cout << " ";
                    }
                }
                else if (shape == 'b') 
                {
                    if (i == x - j + 1) 
                    {
                        cout << i;
                    } 
                    else 
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}

void problem2(){
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
}

void problem3(){
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    if (number < 1 || number > 3000) 
    {
        cout << "Invalid input. Number should be between 1 and 3000." << endl;
    }
    string english = convert(number);
    
    //Output the check value
    cout << english << " and no/100's Dollars" << endl;
}

void problem4(){
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
}

void problem5(){
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
}

void problem6(){
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
}

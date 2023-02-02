/* 
  File:   main.cpp
  Author: Vincent Phan
  Created on January 31, 2023, 8:22 PM
  Purpose:  Menu for Assignment 5
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //C Math Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void minmax(int num1, int num2, int num3, int &min, int &max) //Determines the min and max of inputs
{
  if (num1 > num2) 
  {
    if (num1 > num3) 
    {
      max = num1;
      if (num3 > num2) 
      {
        min = num2;
      } 
      else 
      {
        min = num3;
      }
    } 
    else 
    {
      min = num2;
      max = num3;
    }
  } 
  else 
  {
    if (num2 > num3) 
    {
      max = num2;
      if (num1 > num3) 
      {
        min = num3;
      } 
      else 
      {
        min = num1;
      }
    } 
    else 
    {
      min = num1;
      max = num3;
    }
  }
}
int fctrl(int n)//Function to write for this problem
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
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
int collatz(int n)//3n+1 sequence
{
    int count = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}
int collatz1(int n) {
    int steps = 0;
    while (n != 1) {
        cout << n << ", ";
        steps++;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << "1" << endl;
    return steps;
}
void inputTime(int &hour, int &minute) 
{
    char colon;
    cout << "Input Military Time (hh:mm): ";
    cin >> hour >> colon >> minute;
}

void convertTime(int &hour, int &minute, char &period) 
{
    if (hour >= 0 && hour <= 11) 
    {
        period = 'A';
    } 
    else if (hour >= 12 && hour <= 23) 
    {
        period = 'P';
        hour = hour % 12;
    } 
    else //Input validation 
    {
        cout << hour << ":" << minute << " is not a valid time" << endl;
    }
}
void outputTime(int hour, int minute, char period) 
{
    cout << hour << ":" << minute << " = ";
    if (hour == 0) 
    {
        cout << "12";
    } 
    else if (hour < 10)
    {
        cout << "0" << hour;
    }
    else 
    {
        cout << hour;
    }
    if (minute < 10)
    {
        cout << "0";
    }

    cout << ":" << minute;

    if (period == 'A') 
    {
        cout << " AM" << endl;
    }   
    else 
    {
        cout << " PM" << endl;
    }
}
float psntVal(float f, float r, int n) //Present value formula
{
    return f / pow(1 + (r / 100), n);
}
void getScore(int &score1, int &score2, int &score3, int &score4, int &score5)
    {
    cout << "Find the Average of Test Scores" << endl;
    cout << "by removing the lowest value." << endl;
    cout << "Input the 5 test scores." << endl;
    cin >> score1;
    while (score1 < 1 || score1 > 100) //Input validation
    {
    cout << "Invalid score. Enter a score between 1 and 100: ";
    cin >> score1;
    }
    cin >> score2;
    while (score2 < 1 || score2 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score2;
    }
    cin >> score3;
    while (score3 < 1 || score3 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score3;
    }
    cin >> score4;
    while (score4 < 1 || score4 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score4;
    }
    cin >> score5;
    while (score5 < 1 || score5 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score5;
    }
}
float calcAvg(int score1, int score2, int score3, int score4, int score5)
{ //Find average
    int lowest = score1;
    if (score2 < lowest)
    lowest = score2;
    if (score3 < lowest)
    lowest = score3;
    if (score4 < lowest)
    lowest = score4;
    if (score5 < lowest)
    lowest = score5;
    //Omit lowest score
    float average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4.0;
    //Output data
    cout << "The average test score = " << fixed << setprecision(1) << average;

    return average;

}
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<endl<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem MinMax"<<endl;
        cout<<"Type 2 for Problem Factorial"<<endl;
        cout<<"Type 3 for Problem isPrime"<<endl;
        cout<<"Type 4 for Problem Collatz Sequence"<<endl;
        cout<<"Type 5 for Problem Collatz Sequence with Output of Sequence"
                <<endl;
        cout<<"Type 6 for Problem Savitch 10th Ed Chap 5 Problem 2/3 Time Clock"
                <<endl;
        cout<<"Type 7 for Problem Savitch_9thEd_Chap5_Prob1_TimeConverter"<<
                endl;
        cout<<"Type 8 for Problem Gaddis_9thEd_Chap6_Prob9_Present_Value"<<endl;
        cout<<"Type 9 for Problem Gaddis_9thEd_Chap6_Prob10_Average"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice)
        {
            case '1':
            {
                cout<<"We are in Problem 1"<<endl;
                //Declare Variables
                int num1, num2, num3, min, max;
                //Initialize Variables
    
                //Process/Map inputs to outputs
                cout << "Input 3 numbers" << endl;
                cin >> num1 >> num2 >> num3;
                minmax(num1, num2, num3, min, max);
                //Output data
                cout << "Min = " << min << endl;
                cout << "Max = " << max;
                
                break;
            }
            
            case '2':
            {
                cout<<"We are in Problem 2"<<endl;
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
                
                break;
            }
            case '3':
            {
                cout<<"We are in Problem 3"<<endl;
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
                break;
            }
            case '4':
            {
                cout<<"We are in Problem 4"<<endl;
                int n;
    
                //Initialize Variables
                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;
                cin>>n;
    
                //Process/Map inputs to outputs
                cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    collatz(n)+1<<" steps";
                break;
            }
            case '5':
            {
                cout<<"We are in Problem 5"<<endl;
                int n, steps;
                //Initialize Variables
    
                //Process/Map inputs to outputs
                cout << "Collatz Conjecture Test" << endl;
                cout << "Input a sequence start" << endl;
                cin >> n;
                steps = collatz1(n);
    
                //Output data
                cout << "Sequence start of " << n << " cycles to 1 in " << steps + 1<< 
                    " steps";
                break;
            }
            case '6':
            {
                cout<<"We are in Problem 6"<<endl;
                //Declare Variables
                char am_pm, again;
                int hours, minutes, wait;

                //Initialize Variables

                //Process/Map inputs to outputs
                do
                {
                    cout << "Enter hour:" << endl << endl;
                    cin >> hours;
                    cout << "Enter minutes:" << endl << endl;
                    cin >> minutes;
                    cout << "Enter A for AM, P for PM:" << endl << endl;
                    cin >> am_pm;
                    cout << "Enter waiting time:" << endl << endl;
                    cin >> wait;

                    // Calculate the waiting time
                    int totMin = (hours * 60 + minutes + wait) % 1440;
                    int newHour = totMin / 60 % 12;
                    int newMin = totMin % 60;

                    // Determine AM or PM
                    string newAmPm = (am_pm == 'A' || am_pm == 'a') ? ((totMin / 720 >= 1) ? "PM" : "AM") : ((totMin / 720 >= 1) ? "AM" : "PM");
                    //Output data
                
                    //Current time
                    cout << "Current time = ";
                    if (hours < 10) cout << "0";
                    cout << hours << ":";
                    if (minutes < 10) cout << "0";
                    cout << minutes << " ";
                    if (am_pm == 'A' || am_pm == 'a')
                    {
                        cout << "AM" << endl;
                    }
                    else
                    {
                        cout << "PM" << endl;
                    }
                    //Waiting perioid
                    cout << "Time after waiting period = ";
                    if (newHour < 10) cout << "0";
                    if (newHour == 0) cout << "12";
                    else cout << newHour;
                    cout << ":";
                    if (newMin < 10) cout << "0";
                    cout << newMin << " " << newAmPm << endl << endl;

                    //Again?
                    cout << "Again:" << endl;
                    cin >> again;
                    if (again == 'Y' || again == 'y') 
                    {
                        cout << endl;
                    }
                } while (again == 'Y' || again == 'y');
                break;
            }
            case '7':
            {
                cout<<"We are in Problem 7"<<endl;
                cout << "Military Time Converter to Standard Time" << endl;
                int hour, minute;
                char period;
                char repeat = 'y';

                while (repeat == 'y' || repeat == 'Y') 
                    {
                        inputTime(hour, minute);
                        convertTime(hour, minute, period);
                        outputTime(hour, minute, period);

                        cout << "Would you like to convert another time (y/n)? ";
                        cin >> repeat;
                    }
                break;
            }
            case '8':
            {
                cout<<"We are in Problem 8"<<endl;
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
    
                break;
            }
            case '9':
            {
                cout<<"We are in Problem 9"<<endl;
                //Declare Variables
                int score1, score2, score3, score4, score5;
                //Initialize Variables
    
                //Process/Map inputs to outputs
                getScore(score1, score2, score3, score4, score5); //Call get score function

                calcAvg(score1, score2, score3, score4, score5); //Call calculate average function
                break;
            }
            
            default:
                cout<<"You are exiting the program"<<endl;
        
        }
        
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}
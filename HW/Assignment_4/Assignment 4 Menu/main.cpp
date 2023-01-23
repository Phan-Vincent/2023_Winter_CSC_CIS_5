/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 7:37 PM
 * Purpose: Assignment 4 Menu
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    
    //Map/Process the Inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"This program presents a menu of options for Assignment 4"<<endl;
    cout<<"0 To run Problem Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
    cout<<"1 To run Problem Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
    cout<<"2 To run Problem Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
    cout<<"3 To run Problem Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
    cout<<"4 To run Problem Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
    cout<<"5 To run Problem Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
    cout<<"6 To run Problem Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
    cout<<"7 To run Problem Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
    cout<<"8 To run Problem Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
    cout<<"9 To run Problem Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
    cin>>chose;
    
    switch(chose)
    {
        case '0':
        {
            //Declare Variables
            short num, //User's entered number
                  sum = 0; //Sum of all numbers up to the entered number
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "You are in Problem Gaddis_9thEd_Chap5_Prob1_Sum" << endl;
            cout << "Please enter a positive number. This program computes the"
                    " sum of all numbers up to your number." << endl;
            cin >> num;
            if (num >= 0)    
                for (int i = 0; i <= num; i++)
                {
                    sum += i;
                }
            else
            {
                cout << "Please enter a positive number.";
            }
    
            //Display the outputs
            cout << "Sum" << setw(3) << "= " << sum;
            break;
        }
        
        case '1':
        {
            //Declare Variables
            int days, ////Number of days worked
            pay = 1, //Starting pay of 1 cent on day one, doubling each day after
            total = 0; //Total compensation
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "You are in Problem Gaddis_9thEd_Chap5_Prob7_PayInPennies" 
                    << endl;
            cout << "Enter the number of days worked (1 or greater): ";
            cin >> days;
    
            if (days < 1) //Input validation
            {
                cout << "Please enter a number greater than 1.";
            }
            else
            {
                for (int i = 0; i < days; i++) 
                {
                    total += pay; //Adds daily pay to total
                    pay *= 2;     //Doubles pay each day
                }
            }
    
            //Display the outputs
            cout << "Pay" << setw(2) << "=" << setw(2) << "$" << fixed << 
                    setprecision(2) << setw(4) <<  total * 0.01; 
                    //Outputs and converts back to pennies
            break;
        }
        case '2':
        {
            cout << "You are in Problem Gaddis_9thEd_Chap5_Prob13_MinMax" << 
                    endl;
            cout << "Please enter a series of integers. This program displays "
                    "the largest and smallest numbers entered. Enter '-99' to"
                    "signal the end of the series." << endl;
                //Declare Variables
            short min, //Smallest number entered
                  max, //Largest number entered
                  num0; //Numbers to be input
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cin >> num0;
    
            while (num0 != -99) //Loops until user enters -99
            {
                if (num0 > max) 
                {
                    max = num0;
                }
        
                if (num0 < min) 
                {
                    min = num0;
                }
        
                cin >> num0;
            }
    
            cout << "Smallest number in the series is " << min << endl;
            cout << "Largest  number in the series is " << max;
            break;
        }
        
        case '3':
        {
            cout << "You are in Problem Gaddis_9thEd_Chap5_Prob22_Rectangle" << 
                    endl;
            cout << "This program creates a rectangle based on how large you "
                    "specify and what character you pick. Please enter a number"
                    " no greater than 15 and a character." << endl;
            int side; //Rectangle side length
            char letter; //Character to make rectangle out of
    
            //Initialize or input i.e. set variable values
            cin >> side >> letter;
    
            if (side < 1 || side > 15) //Input validation
            {
                cout << "Please enter a positive integer less than or equal to 15.";
            }
            else
            {
                for (int i = 0; i < side; i++)
                {
                    for (int a = 0; a < side; a++)
                    {
                        cout << letter;
                    }
                    if (i != side - 1) //No new line at the last loop
                    {
                        cout << endl;
                    }
                }
            }
            break;
        }
        
        case '4':
        {
            cout << "You are in Problem Gaddis_9thEd_Chap5_Prob23_Pattern" << 
                    endl;
            cout << "This program displays a pyramid pattern. Please enter the"
                    " length of the base of the pyramid." << endl;
            int num; //Pattern length
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cin >> num;
    
            for (int i = 1; i <= num; i++)
            {
                for (int a = 0; a < i; a++)
                {
                    cout << "+";
                }
                cout << endl << endl;
            }
            for (int i = num; i >= 1; i--)
            {
                for (int a = 0; a < i; a++)
                {
                    cout << "+";
                }
                if (i != 1) //No new line after last loop
                {
                    cout << endl << endl;
                }
            }
            break;
        }
        
        case '5':
        {
            cout << "You are in Problem Savitch_9thEd_Chap4_Prob1_MPG" << endl;
            cout << "This program calculates a car's MPG based on liters of fuel"
                    " and miles driven." << endl;
            float liters, //Input in liters
                  miles, //Input in miles
                  mpg; //Miles per gallon
            char again; //Repeat?
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            do //One loop guarenteed
            {
                cout << "Enter number of liters of gasoline:" << endl << endl;
                cin >> liters;
                cout << "Enter number of miles traveled:" << endl << endl;
                cin >> miles;
                mpg = miles / liters / 0.264179;
                cout << "miles per gallon:" << endl;
                cout << fixed << setprecision(2) << mpg << endl;
                cout << "Again:" << endl;
                cin >> again;
        
                if (again == 'y' || again == 'Y') //Double new line only if looping again
                {
                    cout << endl;
                }
        
            } while (again == 'y' || again == 'Y');
            break;
        }
        
        case '6':
        {
            cout << "You are in Problem Savitch_9Ed_Chap4_Prob2_FuelEff" << 
                    endl;
            cout << "This is a modified program from Savitch_9Ed_Chap4_Prob1_"
                    "MPG that compares two cars based on their fuel efficiency."
                    << endl;
            float liters1, //Input in liters for car 1
            liters2, //Liters for car 2
            miles1, //Input in miles
            miles2,
            mpg1, //Miles per gallon for car 1
            mpg2; //MPG for car 2
            char again; //Repeat?
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            do //One loop guarenteed
            {
                cout << "Car 1" << endl;
                cout << "Enter number of liters of gasoline:" << endl;
                cin >> liters1;
                cout << "Enter number of miles traveled:" << endl;
                cin >> miles1;
                mpg1 = miles1 / liters1 / 0.264179;
                cout << "miles per gallon: " << fixed << setprecision(2) << mpg1
                        << endl << endl;
                cout << "Car 2" << endl;
                cout << "Enter number of liters of gasoline:" << endl;
                cin >> liters2;
                cout << "Enter number of miles traveled:" << endl;
                cin >> miles2;
                mpg2 = miles2 / liters2 / 0.264179;
                cout << "miles per gallon: " << fixed << setprecision(2) << mpg2
                        << endl << endl;
        
                if (mpg1 > mpg2) //Car 1 is more fuel efficient
                    {
                        cout << "Car 1 is more fuel efficient" << endl << endl;
                    }
                else //Car 2 is more efficient
                    {
                        cout << "Car 2 is more fuel efficient" << endl << endl;
                    }
        
                cout << "Again:" << endl;
                cin >> again;
        
                if (again == 'y' || again == 'Y') //Double new line only if looping again
                {
                    cout << endl;
                }
            } while (again == 'y' || again == 'Y');
            break;
        }
        
        case '7':
        {
            cout << "You are in Problem Savitch_9Ed_Chap4_Prob4_Inflation" << 
                    endl;
            cout << "This program calculates inflation." << endl;
            float cPrice, //Current price in USD
            pPrice, //Price 1 year ago
            iRate;  //Inflation rate
            char again;   //Repeat?
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            do
            {
                cout << "Enter current price:" << endl;
                cin >> cPrice;
                cout << "Enter year-ago price:" << endl;
                cin >> pPrice;
                iRate = ((cPrice - pPrice) / pPrice) * 100;
                cout << "Inflation rate: " << fixed << setprecision(2) << iRate << "%" << endl << endl;
                cout << "Again:" << endl;
                cin >> again;
        
                if (again == 'y' || again == 'Y') //Double new line only if looping again
                {
                    cout << endl;
                }
            } while (again == 'y' || again == 'Y');
            break;
        }
        
        case '8':
        {
            cout << "You are in Problem Savitch_9Ed_Chap4_Prob5_EstCost" << 
                    endl;
            cout << "This program is an enhanced version of Savitch_9Ed_Chap4_"
                    "Prob4." << endl;
            float cPrice,  //Current price in USD
            pPrice,  //Price 1 year ago
            oneYear, //Future predicted price in 1 year
            twoYear, //Predicted price in 2 years
            iRate;   //Inflation rate
            char again;    //Repeat?
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            do
            {
                cout << "Enter current price:" << endl;
                cin >> cPrice;
                cout << "Enter year-ago price:" << endl;
                cin >> pPrice;
                iRate = ((cPrice - pPrice) / pPrice);
                cout << "Inflation rate: " << fixed << setprecision(2) << iRate * 100 << "%" << endl << endl;
                oneYear = cPrice + cPrice * iRate;
                twoYear = oneYear + oneYear * iRate;
                cout << "Price in one year: $" << oneYear << endl;
                cout << "Price in two year: $" << twoYear << endl << endl;
                cout << "Again:" << endl;
                cin >> again;
        
                if (again == 'y' || again == 'Y') //Double new line only if looping again
                {
                    cout << endl;
                }
            } while (again == 'y' || again == 'Y');
            break;
        }
        
        case '9':
        {
            cout << "You are in Problem Savitch_9Ed_Chap4_Prob9_2or3Max" << 
                    endl;
            cout << "This program displays the largest number of the first two"
                    ", then of all 3." << endl;
            float num1, //User inputs
            num2,
            num3,
            big2, //Largest number of first 2 parameters
            big3; //Largest of 3 parameters
          
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Enter first number:" << endl << endl;
            cin >> num1;
            cout << "Enter Second number:" << endl << endl;
            cin >> num2;
            cout << "Enter third number:" << endl << endl;
            cin >> num3;
    
            if (num1 > num2) //1>2
            {
                big2 = num1;
                if (num3 > num1) //3>1>2
                {
                    big3 = num3;
                }
                else //1>3
                {
                    big3 = num1;
                }
            }
            else //2>1
            {
                big2 = num2;
                if (num3 > num2) //3>2
                {
                    big3 = num3;
                }
                else //2>3
                {
                    big3 = num2;
                }
            }
    
            //Display the outputs
            cout << "Largest number from two parameter function:" << endl;
            cout << big2 << endl << endl;
    
            cout << "Largest number from three parameter function:" << endl;
            cout << big3 << endl;
            break;
        }
    }
    //Clean up memory and files
    
    //Exit the program
    
    
    return 0;
}


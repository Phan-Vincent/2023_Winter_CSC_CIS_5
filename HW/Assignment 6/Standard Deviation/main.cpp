/* 
 * File:   main.cpp
 * Author:      Vincent Phan
 * Created on:  February 6, 2023, 7:00 PM
 * Purpose:     Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND = pow(2,31) - 1;

//Function Prototypes
void  init(float [], int);//Initialize the array
void  print(float [], int, int);//Print the array
float avgX(float [], int);//Calculate the Average
float stdX(float [], int);//Calculate the standard deviation

void init(float arr [], int size)
{
    float num = 0.0;
    for(int i = 0; i < size; i++)
    {
        cin >> num;
        arr[i] = num;
    }
}
void print(float arr [], int size, int plength)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
float avgX(float arr [], int size)
{
    float sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    float mean = sum / size;
    return(mean);
}
float stdX(float arr [], int size)
{
    float m_sum = 0.0;
    float sum = 0.0;
    for(int i = 0; i < size; i++)
    {
        m_sum += arr[i];
    }
    float mean = m_sum / size;
    for(int j = 0; j < size; j++)
    {
        sum += (((pow((arr[j] - mean),2)) / (size-1)));
    }
    return(sqrt(sum));
    
    //float std=sqrt(sum((xi-mean)2/(n-1)))
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE = 20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,5);
    cout<< fixed;
    cout<<"The average            = "<<setprecision(7)<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<setprecision(7)<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author:   Vincent Phan
 * Created:  February 6, 2023, 6:00 PM
 * Purpose:  Reverse the Array
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

//Function Prototypes
void  init(int [], int);//Initialize the array
void  print(int [], int, int);//Print the array
void  revrse(int [], int);;//Reverse the array

void init(int arr[], int size)
{
    int num = 0;
    for(int i = 0; i < size; i++)
    {
        cin >> num;
        //cout << num<<" ";
        arr[i] = num;
    }
}
void print(int arr[], int size, int length)
{
    for(int i = 0; i < (size / length); i++)
    {
        for(int j = 0; j  <length; j++)
        {
            cout << arr[(i*10) + j] << " ";
        }
        cout << endl;
    }
}
void revrse(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}
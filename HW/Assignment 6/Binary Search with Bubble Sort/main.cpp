/* 
 * File:        main.cpp
 * Author:      Vincent Phan
 * Created on:  February 6, 2023, 11:00 PM
 * Purpose:     Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);
bool binSrch(int [],int,int,int&);


void fillAry(int arr [],int size)
{
    int num = 0;
    for(int i = 0; i < size; i++)
    {
        cin >> num;
        //cout << num<<" ";
        arr[i] = num;
    }
}
void prntAry(int arr [],int size,int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            cout << arr[(i * 10) + j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void bublSrt(int arr[],int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
    
}
bool binSrch(int arr [],int size,int value,int& idx)
{
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == value)
        {
            idx = mid;
            return idx;
        }
 
        if (arr[mid] < value)
            start = mid + 1;
 
        else
            end = mid - 1;
    }
 
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE = 100;
    int array[SIZE];
    int indx,
        val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout << "Input the value to find in the array" << endl;
    cin >> val;
    if(binSrch(array,SIZE,val,indx))
        cout << val << " was found at indx = " << indx << endl;

    //Exit stage right or left!
    return 0;
}
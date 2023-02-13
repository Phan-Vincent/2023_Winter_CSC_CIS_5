/* 
 * File:    main.cpp
 * Author:  Vincent Phan
 * Created: February 6, 2023, 4:05 PM
 * Purpose: Dice Table Sum
 * 
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS = 6;
const int ROWS = 6;

//Function Prototypes
void fillTbl(int array[ROWS][COLS], int);
void prntTbl(int array[ROWS][COLS], int);
void fillTbl(int array[ROWS][COLS], int numRows)
{
    for (int row = 1; row <= numRows; row++)
    {
        cout << setw(4) << row;
    }
}
void prntTbl(int array[ROWS][COLS], int print)
{
    cout << "Think of this as the Sum of Dice Table" << endl;
    cout << "           C o l u m n s" << endl;
    cout << "     |";
    for (int row = 1; row <= ROWS; row++)
    {
        cout << setw(4) << row;
    }
    cout << endl;
    cout << "----------------------------------" << endl;
    for (int row = 1; row <= 6; row++)
    {
        if (row == 1)
        {
            cout << "   ";
        }
        if (row == 2)
        {
            cout << "R  ";
        }
        if (row == 3)
        {
            cout << "O  ";
        }
        if (row == 4)
        {
            cout << "W  ";
        }
        if (row == 5)
        {
            cout << "S  ";
        }
        if (row == 6)
        {
            cout << "   ";
        }
        cout << row << " |";
        for (int col = 1; col <= 6; col++)
        {
            cout << setw(4) << row + col;
        }
        cout << endl;
    }
}

//Execution Begins Here!
int main(int argc, char **argv){
    
    //Declare Variables
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    
    //Display the outputs
    prntTbl(tablSum, ROWS);
    
    //Exit stage right or left!
    return 0;
}
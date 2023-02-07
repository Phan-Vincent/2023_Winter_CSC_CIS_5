/* 
 * File:   main.cpp
 * Author: 
 * Created:
 * Purpose:  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);



void fillTbl(int arr[][COLS],int rows){
    for(int i =0; i<rows; i++ ){
        for(int j =0; j<rows; j++){
            arr[i][j] = (i+1)+(j+1);
        }
    }
}

void prntTbl(const int arr[][COLS],int rows){
    cout <<"Think of this as the Sum of Dice Table"<<endl;
    cout <<"           C o l u m n s"<<endl;
    cout <<"     |   1   2   3   4   5   6"<<endl;
    cout <<"----------------------------------"<<endl;
    for(int i =0; i<rows; i++){
        cout<<"  "<<i+1<<" |";
        for(int j =0; j<rows; j++){
            cout<<"   "<<arr[i][j];
        }
        cout<<"\n";
    }
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}
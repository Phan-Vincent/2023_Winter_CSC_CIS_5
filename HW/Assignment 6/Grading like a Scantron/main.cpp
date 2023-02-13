/* 
 * File:   main.cpp
 * Author:      Vincent Phan
 * Created on:  February 6, 2023, 8:00 PM
 * Purpose:     Compare the answer sheet to the key
 *              and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(const char [], string &);
int  compare(const string &, const string &, string &);

//Function defnitions
void print(const string &s)
{
    cout<<s;
}
void read(const char a[], string &s)
{
    string data_name = a;
    string str;
    fstream file(data_name);
    while (getline (file, str)) 
    {
        cout << "Working" << endl;
        s = str;
    }
    cout << str << endl;
    
    file.close();
}
int compare(const string & key, const string &ans, string &result)
{
    
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[] = "key.dat", fileAns[]="answer.dat";
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
    //pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}
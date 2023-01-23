/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Vincent Phan
 *
 * Created on January 17, 2023, 6:16 PM
 */

#include <iostream> //I/O Library
#include <cstdlib>  //Rand num functions
#include <ctime>    //Time to set rand num seed
#include <cstring>  //String Object
#include <iomanip>  //Format Library

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    srand(static_cast<unsigned int>(time(0)));
    
    unsigned char score;
    char grade;
    
    score = rand()%51+50; //[50-100]
    
    // x = (bool expression)?(true statement):(false statement);
    // grade = (1==1)?(true):(false);
    grade = (score>=90)?('A'):
            (score>=80)?('B'):
            (score>=70)?('C'):
            (score>=60)?('D'):('F');
    
    cout << "The score of " << static_cast<int>(score) << " gives grade: " 
            << grade << endl;
    
    return 0;
}


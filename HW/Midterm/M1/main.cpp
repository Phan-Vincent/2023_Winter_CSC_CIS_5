/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 28, 2023, 8:45 PM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
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


    
    //Exit
    return 0;
}
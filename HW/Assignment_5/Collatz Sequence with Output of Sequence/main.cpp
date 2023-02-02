/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 6:21 PM
 * Purpose:  Collatz Sequence with Output of Sequence
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int n) {
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

//Execution Begins Here
int main() {
    //Declare Variables
    int n, steps;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "Collatz Conjecture Test" << endl;
    cout << "Input a sequence start" << endl;
    cin >> n;
    steps = collatz(n);
    
    //Output data
    cout << "Sequence start of " << n << " cycles to 1 in " << steps + 1<< 
            " steps" << endl;
    
    //Exit stage right!
    return 0;
}

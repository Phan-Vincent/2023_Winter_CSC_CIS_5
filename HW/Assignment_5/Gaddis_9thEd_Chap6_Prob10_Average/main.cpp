/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 10:25 PM
 * Purpose:  Average of Scores
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScore(int &score1, int &score2, int &score3, int &score4, int &score5)
    {
    cout << "Find the Average of Test Scores" << endl;
    cout << "by removing the lowest value." << endl;
    cout << "Input the 5 test scores." << endl;
    cin >> score1;
    while (score1 < 1 || score1 > 100) //Input validation
    {
    cout << "Invalid score. Enter a score between 1 and 100: ";
    cin >> score1;
    }
    cin >> score2;
    while (score2 < 1 || score2 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score2;
    }
    cin >> score3;
    while (score3 < 1 || score3 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score3;
    }
    cin >> score4;
    while (score4 < 1 || score4 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score4;
    }
    cin >> score5;
    while (score5 < 1 || score5 > 100)
    {
        cout << "Invalid score. Enter a score between 1 and 100: ";
        cin >> score5;
    }
}
float calcAvg(int score1, int score2, int score3, int score4, int score5)
{ //Find average
    int lowest = score1;
    if (score2 < lowest)
    lowest = score2;
    if (score3 < lowest)
    lowest = score3;
    if (score4 < lowest)
    lowest = score4;
    if (score5 < lowest)
    lowest = score5;
    //Omit lowest score
    float average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4.0;
    //Output data
    cout << "The average test score = " << fixed << setprecision(1) << average;

    return average;

}
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int score1, score2, score3, score4, score5;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    getScore(score1, score2, score3, score4, score5); //Call get score function

    calcAvg(score1, score2, score3, score4, score5); //Call calculate average function

    
    //Exit stage right!
    return 0;
}
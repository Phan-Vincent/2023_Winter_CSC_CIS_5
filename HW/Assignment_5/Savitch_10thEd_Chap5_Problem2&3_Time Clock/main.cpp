/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 7:30 PM
 * Purpose:  Time Clock
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
    
    //Declare Variables
    char am_pm, again;
    int hours, minutes, wait;

    //Initialize Variables

    //Process/Map inputs to outputs
    do
    {
        cout << "Enter hour:" << endl << endl;
        cin >> hours;
        cout << "Enter minutes:" << endl << endl;
        cin >> minutes;
        cout << "Enter A for AM, P for PM:" << endl << endl;
        cin >> am_pm;
        cout << "Enter waiting time:" << endl << endl;
        cin >> wait;

        // Calculate the waiting time
        int totMin = (hours * 60 + minutes + wait) % 1440;
        int newHour = totMin / 60 % 12;
        int newMin = totMin % 60;

        // Determine AM or PM
        string newAmPm = (am_pm == 'A' || am_pm == 'a') ? ((totMin / 720 >= 1) ? "PM" : "AM") : ((totMin / 720 >= 1) ? "AM" : "PM");
        //Output data

        //Current time
        cout << "Current time = ";
        if (hours < 10) cout << "0";
        cout << hours << ":";
        if (minutes < 10) cout << "0";
        cout << minutes << " ";
        if (am_pm == 'A' || am_pm == 'a')
        {
            cout << "AM" << endl;
        }
        else
        {
            cout << "PM" << endl;
        }
        //Waiting perioid
        cout << "Time after waiting period = ";
        if (newHour < 10) cout << "0";
        if (newHour == 0) cout << "12";
        else cout << newHour;
        cout << ":";
        if (newMin < 10) cout << "0";
        cout << newMin << " " << newAmPm << endl << endl;

        //Again?
        cout << "Again:" << endl;
        cin >> again;
        if (again == 'Y' || again == 'y') 
        {
            cout << endl;
        }
    } while (again == 'Y' || again == 'y');
    //Exit stage right!

    return 0;
}

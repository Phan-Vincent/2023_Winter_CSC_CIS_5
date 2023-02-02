/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 10:00 PM
 * Purpose:  Time Converter
 */

//System Libraries
#include <iostream>
#include <string>

using namespace std;
//Function Prototypes
void inputTime(int &hour, int &minute) 
{
    char colon;
    cout << "Input Military Time (hh:mm): ";
    cin >> hour >> colon >> minute;
}

void convertTime(int &hour, int &minute, char &period) 
{
    if (hour >= 0 && hour <= 11) 
    {
        period = 'A';
    } 
    else if (hour >= 12 && hour <= 23) 
    {
        period = 'P';
        hour = hour % 12;
    } 
    else //Input validation 
    {
        cout << hour << ":" << minute << " is not a valid time" << endl;
    }
    /*if (minute >= 0 && minute <= 59) 
    {

    } 
    else 
    {
        cout << hour << ":" << minute << " is not a valid time" << endl;
        exit(0);
    }*/
}

void outputTime(int hour, int minute, char period) 
{
    cout << hour << ":" << minute << " = ";
    if (hour == 0) 
    {
        cout << "12";
    } 
    else if (hour < 10)
    {
        cout << "0" << hour;
    }
    else 
    {
        cout << hour;
    }
    if (minute < 10)
    {
        cout << "0";
    }

    cout << ":" << minute;

    if (period == 'A') 
    {
        cout << " AM" << endl;
    }   
    else 
    {
        cout << " PM" << endl;
    }
}

int main() {
    
    cout << "Military Time Converter to Standard Time" << endl;
    int hour, minute;
    char period;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') 
        {
            inputTime(hour, minute);
            convertTime(hour, minute, period);
            outputTime(hour, minute, period);

            cout << "Would you like to convert another time (y/n)? ";
            cin >> repeat;
        }

    return 0;
}
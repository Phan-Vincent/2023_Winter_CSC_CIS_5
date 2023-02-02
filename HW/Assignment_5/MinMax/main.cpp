/* 
 * Author: Vincent Phan
 * Created on January 30, 2023, 5:18 PM
 * Purpose:  MinMax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int num1, int num2, int num3, int &min, int &max) //Determines the min and max of inputs
{
  if (num1 > num2) 
  {
    if (num1 > num3) 
    {
      max = num1;
      if (num3 > num2) 
      {
        min = num2;
      } 
      else 
      {
        min = num3;
      }
    } 
    else 
    {
      min = num2;
      max = num3;
    }
  } 
  else 
  {
    if (num2 > num3) 
    {
      max = num2;
      if (num1 > num3) 
      {
        min = num3;
      } 
      else 
      {
        min = num1;
      }
    } 
    else 
    {
      min = num1;
      max = num3;
    }
  }
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, num3, min, max;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "Input 3 numbers" << endl;
    cin >> num1 >> num2 >> num3;
    minmax(num1, num2, num3, min, max);
    //Output data
    cout << "Min = " << min << endl;
    cout << "Max = " << max;
    //Exit stage right!
    return 0;
}
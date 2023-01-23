/* 
 * File:   main.cpp
 * Author: Vincent Phan
 * Created on January 22, 2023, 10:44 PM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
#include <string>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
    cout<<"1 To run Problem Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"2 To run Problem Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
    cout<<"3 To run Problem Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"4 To run Problem Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    cout<<"5 To run Problem Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
    cout<<"6 To run Problem Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    cout<<"7 To run Problem Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
            cout<<"You are in Problem 0"<<endl; 
            string nam1, nam2, nam3; //Placeholders for 3 names
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Sorting Names" << endl;
            cout << "Input 3 names" << endl;
            cin >> nam1 >> nam2 >> nam3;
    
            if (nam1 > nam2) //Currently: 123
            {
                swap(nam1, nam2); //213
            }
            if (nam1 > nam3) //Currently: 123 or 213
            {
                swap(nam1, nam3); //321 or 231
            }
            if (nam2 > nam3) //Currently: 123, 213, 321, or 231
            {
                swap(nam2, nam3); //132, 312, 231, 321
            }
            //123, 132, 213, 231, 312, 321
            //Display the outputs
            cout << nam1 << endl;
            cout << nam2 << endl;
            cout << nam3;
            break;
        }
        case '1':{
            cout<<"You are in Problem 1"<<endl; 
            short numBook, //Number of books purchased
                  points; //Points earned from book purchases
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Book Worm Points" << endl;
            cout << "Input the number of books purchased this month." << endl;
            cin >> numBook;

            if (numBook == 0) //0 purchases
            {
                points = 0;
            }

            if (numBook == 1) //1 purchased
            {
                points = 5;
            }

            if (numBook == 2) //2
            {
                points = 15;
            }

            if (numBook == 3) //3
            {
                points = 30;
            }

            if (numBook >= 4) //4 or more
            {
                points = 60;
            }

            //Display the outputs
            cout << "Books purchased" << setw(2) << "=" << setw(3) << numBook << endl;
            cout << "Points earned" << setw(4) << "=" << setw(3) << points;
            break;
        }
        case '2':{
            cout<<"You are in Problem 2"<<endl; 
            float balance, //Bank balance in USD
            checks, //Number of checks
            chkFee, //Checking fee in USD
            monFee = 10, //Monthly fee of $10
            lowBal, //Low balance fee of $15 if balance < $400
            newBal, //Bank balance after all fees in USD
            cFeeRate; //Checks fee rate
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Monthly Bank Fees" << endl;
            cout << "Input Current Bank Balance and Number of Checks" << endl;
            cin >> balance >> checks;

            if (checks < 0) //Check input validation
            {
                cout << "Please enter a number greater than 0 for checks." << endl;
            }

            if (balance < 400)
            {
                lowBal = 15; //Balance < $400 = fee of $15
                if (balance < 0) //Negative account balance
                {
                    cout << "URGENT: ACCOUNT IS OVERDRAWN." << endl; //Urgent warning
                }
            }
            else 
            {
                lowBal = 0; //No fee if balance >= $400
            }

            if (checks < 20)
            {
                cFeeRate = 0.10; //Check fee of 10 cents per check when checks < 20
            }

            if (checks <= 39 && checks >= 20)
            {
                cFeeRate = 0.08; //Check fee of 8 cents when checks = 20 to 39
            }

            if (checks <= 59 && checks >= 40)
            {
                cFeeRate = 0.06; //Check fee of 6 cents when checks = 40 to 59
            }

            if (checks >= 60) //Check fee of 4 cents when checks is 60 or more
            {
                cFeeRate = 0.04;
            }

            chkFee = checks * cFeeRate;
            newBal = balance - chkFee - monFee - lowBal;
            //Display the outputs
            cout << "Balance" << setw(6) << "$" << setw(9) << fixed << setprecision(2) << balance << endl;
            cout << "Check Fee" << setw(4) << "$" << setw(9) << chkFee << endl;
            cout << "Monthly Fee" << setw(2) << "$" << setw(9) << monFee << endl;
            cout << "Low Balance" << setw(2) << "$" << setw(9) << lowBal << endl;
            cout << "New Balance" << setw(2) << "$" << setw(9) << newBal;
            break;
        }
        case '3':{
            cout<<"You are in Problem 3"<<endl; 
            string run1, run2, run3, //Runners' names
            frst, scnd, thrd; //1st, 2nd, 3rd place
            short time1, time2, time3, //Runners' times
            frstTim, scndTim, thrdTim; //1st, 2nd, 3rd place times
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Race Ranking Program" << endl;
            cout << "Input 3 Runners" << endl;
            cout << "Their names, then their times" << endl;
    
            cin >> run1;
            cin.ignore(1) >> time1; //Grab names, ignore whitespace, grab times
            cin >> run2;
            cin.ignore(1) >> time2;
            cin >> run3;
            cin.ignore(2) >> time3;
    
            if (time1 < time2 && time1 < time3) //Runner 1 = 1st place
            {
                frst = run1;
                frstTim = time1;
                if (time2 < time3) //1, 2, 3
                {
                    scnd = run2; 
                    scndTim = time2;
                    thrd = run3;
                    thrdTim = time3;
                }
                else //1, 3, 2
                {
                    scnd = run3;
                    scndTim = time3;
                    thrd = run2;
                    thrdTim = time2;
                }
            }
            else if (time2 < time1 && time2 < time3) // 2 = 1st place
            {
                frst = run2;
                frstTim = time2;
                if (time1 < time3) //2, 1, 3
                {
                    scnd = run1;
                    scndTim = time1;
                    thrd = run3;
                    thrdTim = time3;
                }
                else //2, 3, 1
                {
                    scnd = run3;
                    scndTim = time3;
                    thrd = run1;
                    thrdTim = time1;
                }
            }
            else if (time3 < time1 && time3 < time2) //3 = 1st place
            {
                frst = run3;
                frstTim = time3;
                if (time1 < time2) //3, 1, 2
                {
                    scnd = run1;
                    scndTim = time1;
                    thrd = run2;
                    thrdTim = time2;
                }
                else //3, 2, 1
                {
                    scnd = run2;
                    scndTim = time2;
                    thrd = run1;
                    thrdTim = time1;
                }

            }
            //Display the outputs
            cout << frst << "\t" << setw(3) << frstTim << endl;
            cout << scnd << "\t" << setw(3) << scndTim << endl;
            cout << thrd << "\t" << setw(3) << thrdTim;
            break;
        }
        case '4':{
            cout<<"You are in Problem 4"<<endl; 
            char pckge, //Package selected
                 A,// = 9.95, //Package A = $9.95/month, 10 hours provided, additional is $2/hr
                 B,// = 14.95, //B = $14.95/mon, 20 hours, $1/hr
                 C;// = 19.95, //C = $19.95/mon, unlimited
            float bill, //Monthly bill
                  hrs; //Hours used
           
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "ISP Bill" << endl;
            cout << "Input Package and Hours" << endl;
            cin >> pckge >> hrs;
    
            if (pckge != 'A' && pckge != 'B' && pckge != 'C') //Input validation
            {
                cout << "Please enter A, B, or C." << endl;
            }
            if (hrs > 744) //Input validation
            {
                cout << "Error: There are only 744 hours maximum in one month." << endl;
            }
            switch (pckge)
            {
                case 'A': //Package A
                    bill = 9.95;
                    if (hrs > 10) //First 10 free
                    {
                        bill = 9.95 + (hrs - 10) * 2;
                    }
                    break;
                case 'B': //Package B
                    bill = 14.95;
                    if (hrs > 20) //20 free
                    {
                        bill = 14.95 + (hrs - 20);
                    }
                    break;
                case 'C': //Package C, unlimited hours
                    bill = 19.95;
                    break;
            }
    
            //Display the outputs
            cout << "Bill" << setw(2) << "=" << setw(2) << "$" << setw(6) << bill;
            break;
        }
        case '5':{
            cout<<"You are in Problem 5"<<endl; 
            char p1, p2; //Players 1 and 2, respectively
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Rock Paper Scissors Game" << endl;
            cout << "Input Player 1 and Player 2 Choices" << endl;
            cin >> p1 >> p2;
    
            p1 = toupper(p1); //Convert to uppercase
            p2 = toupper(p2);
    
            if (p1 == p2) //Check for tie
            {
                cout << "Nobody wins." << endl; 
            }
            else if (p1 == 'R' && p2 == 'S' || p1 == 'S' && p2 == 'R') //R>S
            {
                cout << "Rock breaks scissors.";
            }
            else if (p1 == 'P' && p2 == 'R' || p1 == 'R' && p2 == 'P') //P>R
            {
                cout << "Paper covers rock.";
            }
            else if (p1 == 'S' && p2 == 'P' || p1 == 'P' && p2 == 'S') //S>P
            {
                cout << "Scissors cuts paper.";
            }
            break;
        }
        case '6':{
            cout<<"You are in Problem 6"<<endl; 
            short year,
                  n1,// = year % 10,
                  n10,// = (year / 10) % 10,
                  n100,// = (year / 100) % 10,
                  n1000;// = (year / 1000) % 10;
          
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Arabic to Roman numeral conversion." << endl;
            cout << "Input the integer to convert." << endl;
            cin >> year;
    
            //How many:
            n1 = year % 10; //1s
            n10 = (year / 10) % 10; //10s
            n100 = (year / 100) % 10; //100s
            n1000 = (year / 1000) % 10; //1000s
    
            if (year <= 1000 || year >= 3000) //Input validation: 1000-3000
            {
                cout << year << " is Out of Range!";
                return 0;
            }
            else //Valid
            {
                cout << year << " is equal to ";
                for (int i = 0; i < n1000; i++) //1000s
                {
                    cout << "M";
                }
                if (n100 == 9) //900
                {
                    cout << "CM";
                }
                else if (n100 >= 5) //500+
                {
                    cout << "D";
                    for (int i = 0; i < n100 - 5; i++) //600-800
                    {
                        cout << "C";
                    }
                }
                else if (n100 == 4) //400
                {
                    cout << "CD";
                }
                else
                {
                    for (int i = 0; i < n100; i++) //100-300
                    {
                        cout << "C";
                    }
                }
                if (n10 == 9) //90
                {
                    cout << "XC";
                }
                else if (n10 >= 5) //50+
                {
                    cout << "L";
                    for (int i = 0; i < n10-5; i++) //60-80
                    {
                        cout << "X";
                    }
                }
                else if (n10 == 4) //40
                {
                    cout << "XL";
                }
                else 
                {
                    for (int i = 0; i < n10; i++) //10-30
                    {
                        cout << "X";
                    }
                }
                if (n1 == 9) //9
                {
                    cout << "IX";
                }
                else if (n1 >= 5) //5+
                {
                    cout << "V";
                    for (int i =0; i < n1-5; i++) //6-8
                    {
                        cout << "I";
                    }
                }
                else if (n1 == 4) //4
                {
                    cout << "IV";
                    for (int i =0; i < n1-5; i++) //1-3
                    {
                        cout << "I";
                    }
                }
                else
                {
                    for (int i = 0; i < n1; i++) //Last 1s
                    {
                        cout << "I";
                    }
                }
            }
            break;
        }
        case '7':{
            cout<<"You are in Problem 7"<<endl; 
            string sign1, sign2; //Zodiac signs
    
            //Initialize or input i.e. set variable values
    
            //Map inputs -> outputs
            cout << "Horoscope Program which examines compatible signs." << endl;
            cout << "Input 2 signs." << endl;
            cin >> sign1 >> sign2;
    
            if (sign1 == sign2) //Check for same zodiac
            {
                if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") //Fire signs
                {
                    cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
                }
                else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") //Earth
                {
                    cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
                }
                else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") //Air
                {
                    cout << sign1 << " and " << sign2 << " are compatible Air signs.";
                }
                else //Water
                {
                    cout << sign1 << " and " << sign2 << " are compatible Water signs."; //WATER (Cancer, Scorpio, Pisces)
                }
            }
            else //Different but compatible
            {
                if ((sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
                && (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")) //Compatible Fire
                {
                    cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
                }
                else if ((sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") 
                && (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")) //Compatible Earth
                {
                    cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
                }
                else if ((sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") 
                && (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")) //Compatible Air
                {
                    cout << sign1 << " and " << sign2 << " are compatible Air signs.";
                }
                else if ((sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") 
                && (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")) //Compatible Water
                {
                    cout << sign1 << " and " << sign2 << " are compatible Water signs.";
                }
                else //Different and incompatible
                {
                    cout << sign1 << " and " << sign2 << " are not compatible signs.";
                }
            }
            break;
        }
    }
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}
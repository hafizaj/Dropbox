//
//  main.cpp
//  csClass-1-18-20178
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/18/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <climits>
#include <string>
#include <Header.h>
using namespace std;




/*
 Under 16 years : 1,2,3......13,14,15 only
 Under 16 inches 1,2,3.....57,58,59 only
 Under 110 pounds : 1,2,3.....106,107,108,109 only
 
 Only put in errors that were posted on Stahl's website :
 If the name has digits in it , its a perfectly good name : only error when empty ""
 Report on the very first error that you find.
 If you get error, you can keep prompting for the data , and then
 IF you get error , and then prompt the error immediately.
 
 
 const
 
 
 
 
 
 */

int main()
{
    string customerName;
    int usageMinutes;
    int value1;
    int value2;
    bool internationalPlan;
    bool unlimitedTextMessage;
    
    cout.precision(2);
    cout.setf( ios::showpoint);
    cout.setf( ios::fixed);
    
    cout << "Enter your name:" << endl;
    getline(cin, customerName);
    cin.ignore( 100000,'\n');
    
    cout << "Enter minutes used:" << endl;
    cin >> usageMinutes;
    
    cout << "Want international access?" << endl;
    cout << " ( 1 = Yes / 0 = No):" << endl;
    cin >> value1;
    if (value1 == 1) // you can remove squiggles if the code is one line only
    {
        internationalPlan = true;
    }
    else if ( value1 == 0)
    {
        internationalPlan = false;
    }
    else
    {
        cout << "Please enter a valid choice.";
        exit(0);
    }
    
    cout <<"Want ulimited text messages?" << endl;
    cout << " ( 1 = Yes / 0 = No):" << endl;
    cin >> value2 ;
    if ( value2 == 1)
    {
        unlimitedTextMessage = true;
    }
    else if ( value2 == 0)
    {
        unlimitedTextMessage = false;
    }
    else
    {
        cout << "Please enter a valid choice.";
        exit(0);
    }
    
    double cost;
    cout << "What is the base cost of your plan?" << endl;
    cin >> cost;
    if (usageMinutes > 100)
    {
        cost+=20.00;  //basically the same as cost= cost + 20.00
        
    }
    if ( !unlimitedTextMessage) // if (!unlimitedTextMessage) means not unlimited text message
    {
        //save money !
        cost *= 0.9 ; // which is practically the same as cost = cost * 0.9
        
    }
    if (internationalPlan == true)
    {
        cost+=39.95;
    }
    double tax;
    tax = cost * 0.0875;
    double finalcost = cost + tax;
    cout << "Your cost = "<< finalcost << endl;
    
    
}

//Notes
/*
 C++ is lazy
 if cost = 50.000... , C++ will print out ---> 50
 if cost = 50.1 ... , C++ will print out ----> 50.1
 
 
 Integer division problems and how division works with floating point values:
 
 if both sides of equation are integers , C++ will not divide properly and instead will perform integer division
 C++ integer division, in only returns an integer quantity
 if any one of the operands are floating point values, no longer perform integer division
 
 
 Common errors
 double oneTenthZero = ( one / 10 ) will return zero ;
 because 1/10 is still an integer division
 
 to avoid this
 double oneTenthZero = ( 1.0 / 10.0 ) only takes one decimal point to turn this into a floating point value
 
 ------------------
 Modulus only works for integer operands !!!!!!!!!
 to get a remainder
 int one = 1 % 10
 
 int WONTWORK = 1.0 % 10.0
 doublt QTY = 1.0
 int WONTWORK = QTY % 10;
 
 
 // how many times 1 go into 10 left over < modulus operator >
 // only work when both sides are integer.
 
 both sides to be int for an integer division to take place.
 
 TRICK QUESTION
 var_a * ( 1/ 4 ) is not a QUARTER !!!! it is actually ( 1/4 ) = 0
 
 C++ uses short-circuit evalutaion
 The evaluation of condition stops because the condition turns false ( in case of && ) or when the condition turns true (in the case of ||)
 basically if it knows the answer is false, it will terminate looking other potential candidates.
 
 Precedence rules
 --------
 AND comes before OR
 indentation means nothing, squiggles are the things that count
 
 
 else if ( c++ will choose the first one that it finds as true )
 when everything above it works out that it doesnt not passes through
 
 if you use nested if-else statements: //indentation leads us to belive that it is connected.
    if ( precipitating )
        if  ( temperate < 32 )
            cout << "It's snowing !" << endl;
        else...
 
 
 */

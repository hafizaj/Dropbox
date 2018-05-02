//
//  main.cpp
//  cs31_discussion_1-19-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/19/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1,num2,num3,num4;
    int evenSum= 0;
    cout <<"Enter your first number: ";
    cin >> num1;
    if (num1 % 2 ==0)
    {
        evenSum+=num1;
    }
    cout <<"Enter your second number: ";
    cin >> num2;
    if (num2 % 2 ==0)
    {
        evenSum+=num2;
    }
    cout <<"Enter your third number: ";
    cin >> num3;
    if (num3 % 2 ==0)
    {
        evenSum+=num3;
    }
    cout <<"Enter your fourth number: ";
    cin >> num4;
    if (num4 % 2 ==0)
    {
        evenSum+=num4;
    }

    cout << evenSum;
}
/*
 Undefined behaviours
 
 Divide by 0:
 
 int a = 10
 int b = a*a
 inc c= 25 / (b-100)
 
 Basic structures of a program
 
 Program only executes main function
 cin i1 >> if you try to fit in a string, you will get an error.
 
 say int i2
 cin << i2;
 if you put in 3.5 into i2, it will only read 3...
 if you read integer .. numbers count as string
 
 
 getline will change the varaible, but ignore will
 
 getline reads the whole line until it sees the newline character
 
 only time you use cin.ignore(1000, '\n') : number then string.
 cin >>> k;
 cin.ignore(10000, '\n')
 */


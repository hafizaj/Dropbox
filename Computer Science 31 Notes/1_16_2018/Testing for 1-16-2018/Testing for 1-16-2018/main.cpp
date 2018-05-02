//
//  main.cpp
//  Testing for 1-16-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/16/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
    string dogName;
    string dogBreed;
    int actualAge;
    int dogAge;
    
    cout << "What yo dog age?" << endl;
    cin >> actualAge;
    dogAge = actualAge * 7;
    
    cout << "What yo dog name>" << endl;
    cin.ignore(INT_MAX, '\n');
    getline( cin, dogName);
    
    cout << "What yo dog breed?" << endl;
    cin.ignore(INT_MAX, '\n');
    getline( cin, dogBreed);
    
    cout<< dogBreed << endl;
    cout<< dogName << endl;
    cout<< actualAge<< endl;
    
    
    
    
//you only need ignore after blockblock before getline
    
    
    

    
}



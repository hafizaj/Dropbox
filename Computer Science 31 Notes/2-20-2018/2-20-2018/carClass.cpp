//
//  carClass.cpp
//  2-20-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 2/20/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "carClass.hpp"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
 Some notes about Cstirngs
 
 
 ---By convention, Cstrings are always null terminated.
 ---Must have an extra element in your array for this character.
 ---Cstrings are always partially filled array.
 ---Are arrays with an extra letter \0 (Null terminating chracter)
 ---Example
 char u[] = "Howie!"
 H - o - w - i -e - ! - \0 <--- this is the extra element in the array
 
 char v[] = "abc"
 &
 char w[] = {'a','b','c'} are not equivalent because the first one is a cstring while the second one is an actual
 array meant for characters / no null-terminating character needed.
 
 char x[5];
 x = "Foo" is wrong because c-strings cannot be assigned a value
 You can assign individual character.
 
 
 Never write over the ending null-terminating character --- you will get unpredictable results if you do so.
 
 */

class Car{
    double m_price;
    double m_maxSpeed;
    string m_carName;
    
public:
    Car() {}
    Car(double price, double maxSpeed , string carName) {
        m_price = price;
        m_maxSpeed = maxSpeed;
        m_carName = carName;
    }
    void printCarName()
    {
        cout << m_carName << " is the name of the car." << endl;
    }
    
    double valueFinder(Car car1 )
    {
        double value=0;
        value = car1.m_price/ car1.m_maxSpeed ;
        return value;
        
    }
};

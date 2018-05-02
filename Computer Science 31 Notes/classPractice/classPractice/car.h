//
//  car.hpp
//  classPractice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/3/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef car_h
#define car_h
#include <string>
#include <fstream>
using namespace std;
class Car
{
public:
    Car();
    Car(double price, string name);
    
    
    double getPrice();
    string getName();
    friend Car operator+(Car car1, Car car2);
    friend Car operator-(Car car1, Car car2);
    friend bool operator==(const Car car1, const Car car2);
    friend ostream& operator<<(ostream& outs, const Car car1);
    
    
    
    
    
    
    
    
private:
    double mPrice;
    string mName;
    
    
    
};
#include <stdio.h>

#endif /* car_hpp */

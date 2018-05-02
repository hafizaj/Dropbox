//
//  car.cpp
//  classPractice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/3/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "car.h"

Car::Car()
{
    mPrice = 0;
    mName = "Que?";
}

Car::Car(double price, string name)
{
    mPrice = price;
    mName = name;
}


double Car::getPrice()
{
    return mPrice;
}
string Car::getName()
{
    return mName;
}


bool operator==(Car car1, Car car2)
{
    return ( car1.mName == car2.mName && car1.mPrice==car2.mPrice);
}

ostream& operator<<(ostream& outs, Car car1)
{
    outs << "Name: " << car1.mName << "\nPrice: $" << car1.mPrice;
    return(outs);
}

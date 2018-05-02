//
//  Auto.cpp
//  practice_final
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "Auto.hpp"
#include <fstream>

Auto::Auto() : rightF(),rightR(),leftF(),leftR()
{}

void Auto::drive(int amount)
{
    rightR.roll( amount);
    rightF.roll( amount);
    leftR.roll( amount);
    leftF.roll( amount);
}

std::ostream& operator<< (std::ostream& entry, const Auto autocar)
{
    entry <<  autocar.leftF;
    return entry;
}

int operator+ (Auto autoObj1, Auto autoObj2)
{
    return(69);
}

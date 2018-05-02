//
//  tyre.cpp
//  practice_final
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "tyre.hpp"
#include <fstream>
using namespace std;

Tyre::Tyre() : my_distance(0)
{}

void Tyre::roll(int amount)
{
    my_distance+=amount;
}

int Tyre::returnDistance()
{
    return my_distance;
}

ostream& operator<< (ostream& outs,const Tyre tyreObj)
{
    outs << tyreObj.my_distance;
    return outs;
}

int operator+ (Tyre tyreObj1,Tyre tyreObj2)
{
    return(tyreObj1.my_distance + tyreObj2.my_distance);
}

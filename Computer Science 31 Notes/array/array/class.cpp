//
//  class.cpp
//  array
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "class.hpp"


Tire::Tire()
{
    m_cost = 0;
    m_mileage =0;
}

Tire::Tire(int cost)
{
    m_cost=cost;
    m_mileage =0;
    
}

void Tire::roll() {m_mileage+=20;}

void Tire::stop() {m_mileage-=20;}

int Tire::getMileage() {return m_mileage;}

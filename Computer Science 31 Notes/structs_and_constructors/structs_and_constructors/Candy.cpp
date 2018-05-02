//
//  Candy.cpp
//  structs_and_constructors
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "Candy.hpp"

#include <string>
using namespace std;

Candy::Candy()
{
    m_cost=0;
    m_maker="NULL";
    m_kind="NULL";
}

Candy::Candy(string kind,string maker,double cost) : m_kind(kind), m_maker(maker) ,m_cost(cost)
{
}

string Candy::getMaker()
{
    return m_maker;
}

string Candy::getKind()
{
    return m_kind;
}

double Candy::getCost()
{
    return m_cost;
}


//
//  tire.cpp
//  this
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "tire.hpp"
#include <iostream>
using namespace std;

Tire::Tire() : m_name("kotegoreng")
{}

void Tire::roll(Tire enter)
{
    Tire* ptr=&enter;
    ptr->m_name = "babu";
    cout << ptr->getName() << endl;
    this->m_name="babi";
    cout << this->getName() << endl;
    
}

string Tire::getName() {return m_name;}

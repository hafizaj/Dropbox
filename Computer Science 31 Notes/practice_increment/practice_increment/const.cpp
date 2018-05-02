//
//  const.cpp
//  practice_increment
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/17/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "const.hpp"
#include <iostream>

int Testes::getPrice()  {return price;}
std::string Testes::getName() const {return name;}

void Testes::foo( int& enterNumber) const
{
    checkPrice(enterNumber);

}

void Testes::checkPrice(int numberEnter)
{
    if ( numberEnter == getPrice())
    {
        std::cout << "Betul" << std::endl;
    }
}

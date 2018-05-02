//
//  Candy.hpp
//  structs_and_constructors
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef Candy_hpp
#define Candy_hpp
#include <string>

#include <stdio.h>
struct Candy
{
private:
    std::string m_kind;
    std::string m_maker;
    double m_cost;
public:
    Candy();
    Candy(std::string kind,std::string maker,double cost);
    std::string getKind();

    std::string getMaker();

    double getCost();
    
};
#endif /* Candy_hpp */

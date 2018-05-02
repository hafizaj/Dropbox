//
//  tire.hpp
//  this
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef tire_hpp
#define tire_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Tire
{
public:
    Tire();
    void roll(Tire);
    string getName();
private:
    std::string m_name;
};

#endif /* tire_hpp */

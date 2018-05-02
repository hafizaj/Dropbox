//
//  class.hpp
//  array
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef class_hpp
#define class_hpp

#include <stdio.h>

class Tire
{
public:
    Tire();

    Tire(int cost);
    void roll();
    void stop();
    int getMileage();
    
private:
    int m_cost;
    double m_mileage;
    
};

#endif /* class_hpp */

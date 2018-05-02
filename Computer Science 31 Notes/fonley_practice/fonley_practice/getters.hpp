//
//  getters.hpp
//  fonley_practice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/16/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef getters_hpp
#define getters_hpp

#include <stdio.h>
class Getters
{
public:
    int getPrice() const;
    int getAge() const;
private:
    int m_price;
    int m_age;
};

#endif /* getters_hpp */

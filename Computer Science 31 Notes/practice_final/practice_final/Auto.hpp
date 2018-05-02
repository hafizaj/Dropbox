//
//  Auto.hpp
//  practice_final
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef Auto_hpp
#define Auto_hpp

#include <stdio.h>
#include <string>
#include "tyre.hpp"
class Auto
{
public:
    Auto();
    void drive(int amount);
    friend std::ostream& operator<< (std::ostream& entry, const Auto autoObj);
    friend int operator+ (Auto autoOBj1, Auto autoObj2);
private:
    Tyre leftF;
    Tyre rightF;
    Tyre leftR;
    Tyre rightR;
    
    
};

#endif /* Auto_hpp */

//
//  tyre.hpp
//  practice_final
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef tyre_hpp
#define tyre_hpp


#include <stdio.h>
#include <string>
using namespace std;

class Tyre
{
public:
    Tyre();
    void roll(int amount);
    int returnDistance();
    friend ostream& operator<< (ostream& outs,const Tyre tyreObj);
    friend int operator+ (Tyre tyreObj1,Tyre tyreObj2);
private:
    int my_distance;
    
};

#endif /* tyre_hpp */

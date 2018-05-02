//
//  const.hpp
//  practice_increment
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/17/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef const_hpp
#define const_hpp

#include <stdio.h>
#include <string>


class Testes
{
private:
    std::string name;
    int price;
    
public:
    Testes();
    std::string getName() const;
    int getPrice() ;
    void foo( int&) const;
    void checkPrice(int);
    
};

#endif /* const_hpp */

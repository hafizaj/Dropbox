//
//  Tesla.hpp
//  3_9_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef Tesla_hpp
#define Tesla_hpp

#include <stdio.h>
#include <string>

namespace cs31 {
    class Tesla
    {
    public:
        Tesla(std::string model, std::string maker, std::string color, double price);
        void drive();
        void stop();
        void refuel();
        
    public:
        std::string mModel;
        std::string mMaker;
        std::string mColor;
        double price;
    }
    
    
}

#endif /* Tesla_hpp */

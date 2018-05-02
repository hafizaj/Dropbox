//
//  Car.hpp
//  3_9_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <string>


namespace cs31 {
    class Car{
    public:
        virtual void drive() =0;
        virtual void stop() =0;
        virtual void refuel()=0;
        Car();
        //if a class has at least one virtual function, that object is considered an abstract class
        
    private:
        std::string mModel;
        std::string mMaker;
        std::string mColor;
        double mPrice;
        
        
        
        
        
    };
}

#endif /* Car_hpp */

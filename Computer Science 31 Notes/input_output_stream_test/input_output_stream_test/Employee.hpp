//
//  Employee.hpp
//  input_output_stream_test
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
namespace cs31
{
    class Employee
    {
    public:
        Employee();
        Employee(std::string shift, std::string name,std::string SSN, double wage);
        void feed();
        virtual void promote()=0;
        virtual void terminate()=0;
        
    private:
        std::string mShift;
        std::string mName;
        std::string mSSN;
        double mWage;
    };
}



#endif /* Employee_hpp */

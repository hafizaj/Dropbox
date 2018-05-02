//
//  HourlyEmployee.hpp
//  input_output_stream_test
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef HourlyEmployee_hpp
#define HourlyEmployee_hpp

#include <stdio.h>
#include "Employee.hpp"
namespace cs31
{
    class HourlyEmployee :public cs31::Employee
    {
    public:
        HourlyEmployee();
        HourlyEmployee(std::string shift,std::string name, std::string SSN,double wage);
        std::string getName();
        double getSalary() const;
        std::string getSSN() const;
        void promote();
        void terminate();
        void editName(std::string name);
        void editSSN(std::string SSN);
    private:
        double weeklySalary;
        std::string mShift;
        std::string mName;
        std::string mSSN;
        double mWage;
        
        
    };


}
#endif /* HourlyEmployee_hpp */

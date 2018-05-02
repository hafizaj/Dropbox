//
//  HourlyEmployee.cpp
//  input_output_stream_test
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "HourlyEmployee.hpp"
#include <string>
#include <iostream>
namespace cs31
{
    cs31::HourlyEmployee::HourlyEmployee()
    {
        mShift = "Hourly";
        mName = "Jack Morrison";
        mSSN = "104923899";
        mWage = 10000;
    }
    cs31::HourlyEmployee::HourlyEmployee(std::string shift,std::string name,std::string SSN,double wage): cs31::Employee("Hourly",name, SSN,  wage)
    {
        
    }
    void cs31::HourlyEmployee::promote()
    {
        double rateOfIncrease=0;
        if(mWage>=10000)
        {
            rateOfIncrease = 1.75;
        }
        else
        {
            rateOfIncrease = 1.35;
        }
        std::cout << "You are promoted! Your income has increased by " << rateOfIncrease*100 <<"% !\n";
        mWage*=rateOfIncrease;
    }
    void cs31::HourlyEmployee::editName(std::string name)
    {
        mName = name;
    }
    
    void cs31::HourlyEmployee::editSSN(std::string SSN)
    {
        mSSN = SSN;
    }
    
    std::string cs31::HourlyEmployee::getName()
    {
        return mName;
    }
    double cs31::HourlyEmployee::getSalary() const
    {
        return mWage;
    }
    
    std::string cs31::HourlyEmployee::getSSN() const
    {
        return mSSN; 
    }
    void cs31::HourlyEmployee::terminate()
    {
        std::cout << "You are fired!" << std::endl;
        mWage = 0;
    }
}

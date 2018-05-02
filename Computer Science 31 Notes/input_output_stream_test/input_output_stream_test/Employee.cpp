//
//  Employee.cpp
//  input_output_stream_test
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "Employee.hpp"

#include <string>
#include <iostream>
cs31::Employee::Employee()
{
    mShift = "None";
    mName = "Alan Turing";
    mSSN = "000-000-000";
    mWage = 0;
    
}

cs31::Employee::Employee(std::string shift, std::string name, std::string SSN, double wage)
{
    mShift = shift;
    mName = name;
    mSSN = SSN;
    mWage = wage;
    
}

void cs31::Employee::feed()
{
    std::cout << "Yum! I'm a happy worker now!" << std::endl;
}

void cs31::Employee::promote()
{
    double rateOfIncrease =0;
    if(mWage>= 10000)
    {
        rateOfIncrease = 1.25;
    }
    else
    {
        rateOfIncrease = 1.9;
    }
    std::cout <<"You are promoted! Your income has increased by " << rateOfIncrease*100 << "% !";
    mWage*=rateOfIncrease;
}

void cs31::Employee::terminate()
{
    std::cout << "You are fired!" << std::endl;
    mWage = 0.00;
    
}

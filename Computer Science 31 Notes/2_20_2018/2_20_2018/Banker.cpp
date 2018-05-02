//
//  main.cpp
//  2_20_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 2/20/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include "Baccount.cpp"
#include <stedexcept>
using namespace std;
using namespace cs31;
std::logic_error
//1.its public constructor
//you cant make a logic error out of nothing
//the way you make a logic error is you need to pass some sort of string messgge
//the string describes what went wrong.
//provided at construction time
//e.what() returns "ran out of gas" //whatever string you provide at construction time.

int main()
{
    
}

//class code will throw
//driver code will catch

/*
 Exception handling is different
 
 Different
 
 
 Without a try catch block, when you actually running, then
 
 When you have code that throws, you want a driver code that catches.
 
 
 
 If you want a catch block, it has to be attached to a catch block
 
 Like an else statement without an if statement.
 
 Catch --- if it didnt succeed , do the stuff in the catch block
 
 
 */

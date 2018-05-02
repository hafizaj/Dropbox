//
//  main.cpp
//  input_output_stream_test
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/9/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//


#include <iostream>
#include <string>
#include <cstring>
#include "Employee.hpp"
#include "HourlyEmployee.hpp"
using namespace std;
using namespace cs31;
/*
string compress(string word)
{
    string temp;
    int counter=0;
    for(int i=0;i<word.size();i++)
    {
        counter++;
        if (i+1>= word.length()|| word[i] != word[i+1]) //end the loop
        {
            temp+= word[i] + to_string(counter);
            counter = 0;
        }
        
    }
    return  temp;
}

int main()
{
    cout << compress("aaaaab") << endl;
}
*/

//compress using pointers

/*
string compress(char* c) //passes in a cstring
{
    
    char* tempPtr = new char[];
    
    int counter =0;
    for(;*c != '\0'; c++)
    {
        
    }
    
    
}
 */

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    HourlyEmployee JackMorrison;
    cout << JackMorrison.getSalary() << endl;
    JackMorrison.promote();
    cout << JackMorrison.getSalary() << endl;
    JackMorrison.feed();
    JackMorrison.terminate();
    cout << JackMorrison.getSalary() << endl;
    
    HourlyEmployee* ptr;
    ptr = new HourlyEmployee[2];
    string name1;
    cout << "Please enter the name of the first person in the element:";
    getline(cin,name1);
    ptr->editName(name1);
    cout << ptr->getName() << endl;
    cout << ptr->getSSN() << endl;
    cout << ptr->getSalary() << endl;
    cout << "Now the second element in the array" <<endl;
    ptr++;
    ptr->promote();
    cout << ptr->getSalary() << endl;
    ptr--;
    cout <<"Going back to the first element in the array.\n";
    cout << ptr->getSalary() << endl;
    //firing this worker now
    ptr->terminate();
    cout << ptr->getSalary() << endl;
    //ptr= nullptr;
    delete [] ptr;
    
    
    
}

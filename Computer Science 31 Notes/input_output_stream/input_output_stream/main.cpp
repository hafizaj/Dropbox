//
//  main.cpp
//  input_output_stream
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/1/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ofstream out;
    out.open("default.txt");
    out << "Testing: Please ignore" << endl;
    out << "Why are you not ignoring this?" << endl;
    out << "Seriously, stop looking at it." << endl;
    out.close();
    
    ifstream in; 
    in.open("default.txt");
    string line;
    while(getline(in, line))
    {
        cout << line << endl;
    }
}


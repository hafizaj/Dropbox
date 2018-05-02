//
//  main.cpp
//  3_1_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/1/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    
    
     ofstream out_stream;
     out_stream << "Testing more strings" << endl;
    cout << out_stream ;
     out_stream.close();
     /*
    ifstream in_stream;
    in_stream.open("file.dat");
    string var1;
    in_stream >> var1;
    cout << var1 << endl;
    in_stream.close();
    */
}

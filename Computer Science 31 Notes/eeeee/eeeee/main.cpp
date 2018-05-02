//
//  main.cpp
//  eeeee
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/18/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;

struct Robot
{
    Robot()
    {
        cout << "Constructor call" << endl;
    }
};

int main()
{
    Robot a[2];
    for(int k=0;k<2;k++)
    {
        Robot b;
    }
    Robot* ptr = a;
    Robot* ptr2 = ptr;
} 

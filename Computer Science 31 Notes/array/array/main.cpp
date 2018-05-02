//
//  main.cpp
//  array
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include "class.hpp"
using namespace std;

int main()
{
    Tire* d;
    cout << "Enter a number: " ;
    int n;
    cin >> n;
    
    d = new Tire[n];
    for (int i=0; i<n; i++ )
    {
        cout << "Before rolling :" << d->getMileage() << endl;
        d->roll();
        d->roll();
        cout << d << endl;
        //cout << "After rolling :" << d->getMileage() <<endl;
        d++;
        
    }
    delete [] d;

    
}


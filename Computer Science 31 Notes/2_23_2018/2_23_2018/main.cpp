//
//  main.cpp
//  2_23_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 2/23/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;
void Foo(int *iptr)
{
    //although this pointer will terminate, the value change will persist.
    *iptr = 6;
}

int main()
{
    /*
    int *iptr; //stores the value of the location of a variable
    int i=5;
    iptr=&i;
    
    
    int *blob = new int; //if a variable doesnt have a name, it will be on the heap
    int j=70;
    blob = &j;
    int *number = new int;
    *number = 69;
    blob = number;
    cout << *blob << endl;
    if ( blob != nullptr)
    {
        blob = nullptr;
    }
    if ( number!= nullptr)
    {
        number = nullptr;
    }
    int blacked;
    blacked = 100;
    cout << blacked << endl;
    delete blob;
    delete number;
    
    
    
    
    
    
    Foo(iptr);
    cout << i << endl;
    */
    //initialize an array of size 56
    
}


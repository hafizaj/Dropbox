//
//  main.cpp
//  3-2-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/2/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int b[5] = {1,2,3,4,5};
    int* p;
    
    p = b;
    for (int j=4;j>=0;j--)
    {
        cout << p[j] << endl;
    }
    cout << "Testing how array-pointers work" << endl;
    cout << *(b+1) << endl;
    
    int *q;
    
}

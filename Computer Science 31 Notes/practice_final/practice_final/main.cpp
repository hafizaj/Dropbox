//
//  main.cpp
//  practice_final
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <fstream>

#include "tyre.hpp"
#include "Auto.hpp"

using namespace std;

int main()
{
    Auto BMW;
    Auto* ptrAuto = &BMW;
    ptrAuto->drive(150);
    ptrAuto->drive(150);
    cout << *ptrAuto << endl;
    cout << *ptrAuto + *ptrAuto << endl;
    
}
 

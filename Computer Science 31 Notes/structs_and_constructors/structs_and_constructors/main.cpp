//
//  main.cpp
//  structs_and_constructors
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>
#include "Candy.hpp"




int main()
{
    Candy c("Snickers","Mars",1.25);
    cout << c.getCost() <<" "<< c.getKind() << " " << c.getMaker() << endl;
    Candy* ptrCandy = &c;
    cout << ptrCandy->getMaker() << endl;
    
}

//
//  friend.cpp
//  fonley_practice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/16/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "friend.hpp"


void Friend::changeName(std::string name)  {nameFriend =name;}

std::string koteBesar(Friend object)
{
    object.nameFriend = "Kote Besar";
    return object.nameFriend;
}

int Friend::getPrice() const
{
    return priceFriend;
}



Friend::Friend() : nameFriend("Hitam Legam") {}
//if you have a function who has a const parameter, you cannot have a member function that has

/*
 the const parameter cannot be passed into a non-constant function
 
 */

Friend::Friend(int* ptr) {ptr=new int[5];}

Friend::~Friend()
{
}

//
//  friend.hpp
//  fonley_practice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/16/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef friend_hpp
#define friend_hpp

#include <stdio.h>
#include <string>

class Friend{
private:
    
    int priceFriend;
    std::string nameFriend;
    int* ptrFriend;
public:
    Friend();
    Friend(int* ptr);
    ~Friend();
    friend std::string koteBesar(Friend object);
    void changeName(std::string name);
    int getPrice() const ;
    
    
};

#endif /* friend_hpp */

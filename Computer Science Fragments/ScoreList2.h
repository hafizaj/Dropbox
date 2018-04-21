//
//  ScoreList.hpp
//  Sequence
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 4/17/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef ScoreList_h
#define ScoreList_h
#include "newSequence.h"
#include <stdio.h>
#include <limits>


const unsigned long NO_SCORE = std::numeric_limits<unsigned long>::max();

class ScoreList
{
public:
    ScoreList();       // Create an empty score list.
    
    bool add(ItemType score);
    // If the score is valid (a value from 0 to 100) and the score list
    // has room for it, add it to the score list and return true.
    // Otherwise, leave the score list unchanged and return false.
    
    bool remove(ItemType score);
    // Remove one instance of the specified score from the score list.
    // Return true if a score was removed; otherwise false.
    
    int size() const;  // Return the number of scores in the list.
    
    unsigned long minimum() const;
    // Return the lowest score in the score list.  If the list is
    // empty, return NO_SCORE.
    
    unsigned long maximum() const;
    // Return the highest score in the score list.  If the list is
    // empty, return NO_SCORE.
    
private:
    // Sequence as a private data member
    Sequence m_scoreSequence;
    
};


#endif /* ScoreList_h */

//
//  ScoreList.cpp
//  Sequence
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 4/17/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include "ScoreList.h"
#include "Sequence.h"

ScoreList::ScoreList()
{
}

bool ScoreList::add(ItemType score)
// If the score is valid (a value from 0 to 100) and the score list
// has room for it, add it to the score list and return true.
// Otherwise, leave the score list unchanged and return false.
{
    //checking valid from 0 to 100
    if ( score <= 100)
    {
        return m_scoreSequence.Sequence::insert(m_scoreSequence.size(),score) ;
    }
    return false;
}

bool ScoreList::remove(ItemType score)
// Remove one instance of the specified score from the score list.
// Return true if a score was removed; otherwise false.
{
    int positionErase = m_scoreSequence.Sequence::find(score); //using the array function
    if(positionErase!= -1)
    {
        return (m_scoreSequence.Sequence::erase(positionErase));
    }
    else
        return false;
}

int ScoreList::size() const // Return the number of scores in the list.
{
    return m_scoreSequence.Sequence::size();
}

ItemType ScoreList::minimum() const
// Return the lowest score in the score list.  If the list is
// empty, return NO_SCORE.
{
    if(size() ==0)
        return NO_SCORE;
    else
    {
        ItemType guard = 100;
        ItemType value = 0;
        for (int i =0 ; i < size() ; i++)
        {
            m_scoreSequence.get(i, value);
            if(value < guard)
            {
                guard = value;
            }
        }
        return guard;
    }
    
}

ItemType ScoreList::maximum() const
// Return the highest score in the score list.  If the list is
// empty, return NO_SCORE.
{
    if(size() ==0)
        return NO_SCORE;
    else
    {
        ItemType guard = 0;
        ItemType value = 0;
        for (int i =0 ; i < size() ; i++)
        {
            m_scoreSequence.get(i, value);
            if(value > guard)
            {
                guard = value;
            }
        }
        return guard;
    }
    
}


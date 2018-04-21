//
//  testScoreList.cpp
//  Sequence
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 4/17/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string>
#include "ScoreList.h"
#include "newSequence.h"
#include <cassert>
using namespace std;


void test()
{
    ScoreList m;
    m.add(10);
    m.add(20);
    m.add(30);
    m.add(40);
    m.add(50);
    m.add(60);
    m.add(70);
    m.add(20);
    
    assert(m.size()==8);
    assert(m.minimum()==10);
    assert(m.maximum()==70);
    
    //testing remove
    m.remove(20);
    assert(m.size()==7);
    m.remove(20);
    assert(m.size()==6);
    m.remove(20);
    assert(m.size()==6);
    m.remove(100);
    assert(m.size()==6);
    m.remove(10);
    assert(m.size()==5);
    
    ScoreList a;
    assert(a.add(10) == true);
    assert(a.add(20) == true);
    assert(a.add(5) == true);
    assert(a.add(40) == true);
    assert(a.add(50) == true);
    assert(a.remove(50));
    assert(!a.remove(100)); // there is no 100 in the sequence
    
    ScoreList b;
    assert(b.add(20));
    assert(b.add(30));
    assert(b.add(0));
    //cannot insert invalid numbers
    assert(!b.add(-10));
    assert(!b.add(-20));
    assert(!b.add(-30));
    assert(!b.add(101));
    assert(!b.add(1000));
    //now we check that we didnt add anything.
    assert(b.size()==3);
    assert(b.add(20));
    assert(b.add(30));
    assert(b.add(40));
    assert(b.add(70));
    assert(b.add(20));
    assert(b.size()==8);
    //now we remove
    assert(b.remove(20));
    assert(b.remove(20));
    assert(b.remove(20));
    //remove 3
    assert(b.size()==5);
    assert(!b.remove(20));
    assert(b.size()==5);
    //minimum maximum
    assert(b.minimum()==0);
    assert(b.maximum()==70);
    
    ScoreList c;
    for(int i=0;i < 20; i++)
    {
        assert(c.add(5*(i+1)));
    }
    assert(c.minimum()==5);
    assert(c.maximum()==100);
    assert(c.size()==20);
    //remove multiples of ten
    for(int i=0;i<10;i++)
    {
        c.remove(10*(i+1));
    }
    //now size should be 10
    assert(c.size()==10);
    assert(c.minimum()==5);
    assert(c.maximum()==95);
    
    
    ScoreList f;
    assert(f.add(10) == true);
    assert(f.add(20) == true);
    assert(f.add(5) == true);
    assert(f.add(40) == true);
    assert(f.add(50) == true);
    assert(f.minimum() == 5);
    assert(f.maximum() == 50);
    
    ScoreList g;
    for(int i=0;i<200;i++)
    {
        assert(g.add(5));
    }
    assert(!g.add(20));
    assert(!g.add(30));
    assert(!g.add(40));
    assert(!g.add(50));
    //remove 50 copies of score 5
    for(int i=0;i<50;i++)
    {
        assert(g.remove(5));
    }
    
    ScoreList h;
    for(int i=0;i<10;i++)
    {
        assert(h.add(3));
    }
    assert(h.size()==10);
    assert(!h.remove(100));
    assert(h.size()==10);
}

int main()
{
    test();
    cout << "Passed all tests" << endl;
}


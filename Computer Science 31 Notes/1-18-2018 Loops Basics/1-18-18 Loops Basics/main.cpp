//
//  main.cpp
//  1-18-18 Loops Basics
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/18/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;



//indeterminate loop
//true for question is at the bottom

int main()
{
    int x;
    int y;
    cout << "Input your x: " << endl;
    cin >> x;
    cout << "Input your y: " << endl;
    cin >> y;
    
    
    while ( x < y)
    {
        cout << x << endl;
        x++;
        
    }
}
/*
 Test is at the top
 Potentially, the body of the loop might never ever form
 
 
 
 
 
 
 */

//Indeterminate loop

//do while loop difference
/*
 guaranteed to run at least once because the test is run at the top, not at the bottom.
 goal is to make this false
 and then it will terminate
 
 Possiblilites:
 true/false never reached false condition
 do....while will at least run once.
 
 --------
 special note
 do {
 cout << " x*y/n ";
 x++;
 } while (x < y ) ; needs a semicolon after "while"
 
 while guards the body
 do-while actually executes the code
 
 */


//do-while with a multistatement body



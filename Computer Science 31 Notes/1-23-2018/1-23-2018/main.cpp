//
//  main.cpp
//  1-23-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/23/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
*/
//for loop notes

/*
int main()
{
    int len;
    cout<<"Enter len: ";
    cin>>len;
    for (int i=0;//initiliazation step
         i<len;//loop test
         i++)//update step: that is repeated each time the loop is run.

         //the lifespan of i in this code only exists for as long as this loop exists. once it is over, it is deleted from the stack.

    {
        cout<<"Hahahah\n";
        
    }
         
}

*/
/*
int main(){
    int controllingExpression;
    cout<<"Enter a number from 1-10: ";
    cin>> controllingExpression;
    switch(controllingExpression)//this is basically an if_else statement
    {
        case 1:
            cout<<"Beach please\n";
            break;//a break is not required. //lacking a break they will collide
        case 2:
            cout<<"Hola amigo!\n";
            break;
        case 3:
            cout<<"Lucha Madre\n";
            break;
        default: //default will run if no other cases run
            cout<<"Too big for me to care.\n";
            break;
    }
}
 */
/*
 suppose you wanna run this stuff
 common programming flaw you find in c-sharp
 if you dont know your case in advance, you cant write a switch statmenrt
 
 
 */
/*
int main()
{
    cout<<"Enter vehicle id";
    int vehicle;
    double toll=0;
    cin>>vehicle;

    switch(vehicle)//switch must be a int quantity
    {
        case 1:
            cout<<"Car";
            toll=0.5;
            
        case 2:
            cout<<"Cunt";
            toll+=1.00;
            cout<<toll;
            break;
        default:
            toll+=10;
            
    }
}
*/

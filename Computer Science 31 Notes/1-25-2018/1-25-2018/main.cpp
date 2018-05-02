//
//  main.cpp
//  1-25-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/25/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main(int argc, const char * argv[])
{
    int a = 10;
    int b = 22;
    while (a / 2 >= 1) {
        a--;
        cout << a << endl;
        if ((a + b) % 2 == 0) {
            a--;
            cout << a << endl;
            b /= 2;
        }
    }
}
 */
/*
 char is an interval
 */
int main()
{
    string s;
    cout<<"Enter your string ";
    getline(cin,s);
    cout<<"Enter your second string ";
    string t;
    cin >>t;
    s.length(); //parenthesis-parenthesis means that no parameters needed
    //s.size() return the exact same thing
    
    //set starts counting from zero
    for ( size_t i=0; i<s.length();i++ )
    {
        //you want the [i]th letter
        //char c = s.at(i);
        char c = s[i];
        cout << "This is the first letter: "<< c << " !\n";
        
    }
    
}

int number(string data)
{
    int result = -1;
    int value=0;
    return(result); //write a tiny proportion of code and then expand of your code
    //loop letter by letter
    size_t len = data.length();
    for ( size_t i=0; i <len ;i++)
    {
        char c = data[i];
        
        if ( c>='1' && c<='9')
        {
            value = value * 10 + ( c-'0'); // because digit character packed continuosly next to each other
            //convert letter into their numerical equivalent
            //from the start of the string.
            
        }
        switch(c)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                break;
            default:
                break;
        }
    }
}

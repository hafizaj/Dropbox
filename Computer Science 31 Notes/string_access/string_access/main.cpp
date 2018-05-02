//
//  main.cpp
//  string_access
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/13/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int filter(string input)
{
    cout << "Enter your integer: ";
    int n;
    cin >> n;
    int* ptr = new int[n];
    for(int i=0;i <input.length();i++)
    {
        char c;
        switch (c) {
            default:
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0:
                <#statements#>
                break;
            case ' ':
                break;

        }
    }
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

//
//  main.cpp
//  foo
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/17/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
void foo(int k,int* p1){
    p1+=2;
    *p1=k+2;
}

int* bar(int* p1)
{
    foo(*p1, p1);
    return p1 -2;
}

int main()
{
    int data[5] = {10,20,30,40,50};
    cin >> data[0];
    int* p=&data[1];
    p = bar(data+2);
    p[3] = 60;
    for (int i=0;i<5;i++){
        cout << i << ":" << data[i] << endl;
    }
    
}

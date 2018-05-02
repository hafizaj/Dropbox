//
//  main.cpp
//  classPractice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/3/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include "car.h"
/*
char* reverseCString(char* a, int length) {
    // STRATEGY
    // cstring will have null byte at the end
    // use the null byte spot to store chars
    
    // store letter at index i in the null spot
    // replace letter in index i with letter from the end of the string
    // reinsert letter in index i into end of the string
    for (int i = 0; i < length/2; i++) {
        a[length] = a[i];
        a[i] = a[length-1-i];
        a[length-1-i] = a[length];
    }
    
    // reinsert the null byte
    a[length] = '\0';
    
    return a;
}


int main()
{

    Car emptycar;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << emptycar << endl ;
    char a[] = "pantat";
    char* ptr;
    ptr = a;
    cout << reverseCString(ptr, 6) << endl;
    
    
}
*/
/*
void mystery2(int* a, int*b) {
    int* temp = a;
    a = b;
    b = temp;
}

void boxChange(int* p)
{
    *p = 69;
}
int main()
{
    int a = 1;
    int b = 2;
    int* ptr1 = &a;
    int* ptr2= &b;
    mystery2(ptr1, ptr2);
    cout << *ptr1 << *ptr2 << endl;
    
    int c=420;
    int* ptr3 = &c;
    boxChange(ptr3);
    cout << *ptr3 << endl;
}
 
 */
#include<iostream>
using namespace std;
void mystery(int *ptra, int *ptrb)
{
    int *temp;
    temp = ptrb;
    ptrb = ptra;
    ptra = temp;
}
int main()
{
    int a = 2016, b = 0, c = 4, d = 42;
    mystery(&a, &b);
    if (a < c)
        mystery(&c, &a);
    mystery(&a, &d);
    cout << a << endl;
}

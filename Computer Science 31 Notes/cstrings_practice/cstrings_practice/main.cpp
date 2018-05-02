//
//  main.cpp
//  cstrings_practice
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/10/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>


/*
void partition(int arr[],int length)
{
    int next=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]<0)
        {
            int temp= arr[i];
            arr[next] = arr[i];
            arr[i] = temp;
            next++;
        }
    }
}
*/
void partition(int arr[], int length) {
    int next = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            // swap
            int tmp = arr[next];
            arr[next] = arr[i];
            arr[i] = tmp;
            next++;
        }
    }
}

int reverse(int* num)
{
    int sum=0;
    while(*num >0)
    {
        sum =sum*10 + (*num) % 10;
        *num/=10;
    }
    
    return sum;
    
}

int main()
{
    const int i =5;
    int arr[i] = { 1,-2,-3,4,-5};
    partition(arr, 5);
    for ( int j=0; j<i;j++)
    {
        std::cout << arr[j] << std::endl;
    }
    int num = 123456;
    int* ptr=&num;
    std::cout << reverse(ptr) << std::endl;
    std::cout << *ptr << std::endl;
    
    return(0);
}

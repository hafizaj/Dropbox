//
//  main.cpp
//  2-20-2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 2/20/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include "carClass.cpp"

using namespace std;

/*
class Car{
 private:
    string m_carname;
    double m_priceCar;
    int m_maxSpeed;
    int m_lifeSpan;
 public:
    Car(string carname, double priceCar, int maxSpeed,int lifeSpan); //constructor
    int value(int maxSpeed,int priceCar)
    {
        double value=0;
        value = maxSpeed / priceCar ;
        return value;
        
    }
    
    
};
*/

class Complex{
    int m_real;
    int m_imaginary;
    
public:
    Complex() {}
    Complex (int real, int imaginary)
    {
        m_real=real;
        m_imaginary=imaginary;
    }
    void print()
    {
        cout << m_real << "+" << m_imaginary << "i" << endl;
    }
    void sum(Complex c1, Complex c2)
    {
        m_real = c1.m_real + c2.m_real;
        m_imaginary = c1.m_imaginary + c2.m_imaginary;
    }
    
};

int main()
{
    /*
    string carname;
    double priceCar;
    int maxSpeed;
    int lifespan;
    cout << "Enter the details as follows: " ;
    cin >> carname ;
    cin.ignore(10000,'\n');
    cin >> priceCar ;
    cin >> maxSpeed ;
    cin >> lifespan ;
    Car car1(carname,priceCar,maxSpeed,lifespan);
    int value = car1.value(maxSpeed,priceCar);
    cout << "The worthiness of the car is: " << value << endl;
    return(0);
     */
    Complex c1(5,6);
    Complex c2(-2,4);
    Complex c3;
    
    c1.print();
    c2.print();
    cout << "The sum of the two complex numbers is: " << endl;
    c3.sum(c1, c2);
    c3.print();
    
    
    char myString[10] = "dobedo";
    cout << strlen(myString) << endl;
    char stringVar[20] = "The rain ";
    strcat(stringVar, "in Spain.");
    cout << stringVar << endl;
    
    Car mazda(10000.0,2690.0,"Mazda");
    mazda.printCarName();
    double value = mazda.valueFinder(mazda);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
    cout << value << endl;
    return(0);
    
}

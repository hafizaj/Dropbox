//
//  main.cpp
//  practice_increment
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/16/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
/*
void koteGoreng(int sizeKote, int berapaKote=0, string koteSape="")
{
    cout << koteSape << " ada " << berapaKote << " kote yang berukuran " << sizeKote << " ." << endl;
}

int main() {
    int i;
    cout << "Please enter your number: " ;
    cin >> i;
    switch (i) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Wo Cao ni Ma" << endl;
            break;
            
        default:
            cout << "The Game!" << endl;
            break;
    }

    koteGoreng(12,3,"Syukri");
    
}
*/

/*
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

struct dayOfTheWeek {
    string day;
    string month;
    int hour;
} March= {"Monday","April",12}, April;

class koteGoreng
{
public:
    string kote;
    string sape;
    int hour;
    koteGoreng() {kote="kotak";sape="takde sape";hour = 69;}
    koteGoreng(string koteIn,string sapeIn, int hourIn) {kote = koteIn; sape=sapeIn;hour=hourIn;}
} koteAkmal = { "kote", "Akmal", 12}, koteJohan = { "kote","Johan",16} ;

int main()
{
    cout << March.day << endl;
    cout << March.hour << endl;
    dayOfTheWeek p = {"Monday", "March", 69};
    cout << koteJohan.hour << endl;
    koteGoreng* kotePtr = new koteGoreng();
    cout << kotePtr->kote << endl;
    
    
}
 */

/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Policecar
{
    Policecar()
    {
        cout << "Policecar things." << endl;
        wage = 1000;
        cout << "With a wage: " << wage << endl;
    }
    Policecar(int wageIn)
    {
        cout << "Manually enter the wage !" << endl;
        wage = wageIn;
    }
    int wage;
};

struct Tester
{
    Tester()
    {
        cout << "Testing: Posting results." << endl;
        price = 0;
        quantity =0;
        
        //it has no policecar initialization
        //what happens now?
        //it calls the default constructor of policecar
    }

    
    
    Policecar police;
    int price;
    int quantity;
};

void inputHere(int enter)
{
    int numberSecond;
    cin.ignore(10000,'.');
    cout << "Enter your number here: " ;
    cin >> numberSecond;
    cout << enter << endl ;
    cout << numberSecond << endl;
    
}

int main()
{
    //Tester* d = new Tester[3];
    //cout << d->police.wage << endl;
    float e = 22;
    cout << 7/22 << endl;
    cout << 7/e << endl;

    cout << "Enter your first number: ";
    int firstNumber;
    cin>>  firstNumber;
    inputHere(firstNumber);
    
    
    
    
}
*/
/*
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
using namespace std;

namespace sfx
{
    void foo()
    {
        cout << "Testing" << endl;
    }
}

int main()
{
    std::logic_error e("chutiya");
    int x=10;
    

    try {
        for ( int i=0; x>i;i++)
        {
            if(x==10)
            {
                cout << "Breaking out of this loop! ";
                throw runtime_error("Ooops");
                break;
            }
            cout << "it doesnt work!" << endl;
            throw e;
        }
    } catch (std::runtime_error) {
        
        cout << "Mutherfuda" << endl;

        
    }
    sfx::foo();
    
}
*/

void foo(int& d)
{
    cout << "Your mum guy" << d << endl;
}
void foo(string& e);

int main()
{
    double d=12;
    foo("sex");
    foo(12);
    //foo(d);
    
}



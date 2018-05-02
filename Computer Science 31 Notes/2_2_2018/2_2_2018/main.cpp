//
//  main.cpp
//  2_2_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 2/2/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
/*
using namespace std;
void doglobal();
void dolocal();
void doref(int&);
void doval(int);

int x;
int main()
{
    x=15;
    doref(x);
    cerr<<"x= "<< x << endl;
    x = 16;
    doval(x);
    cerr<<"x= "<< x<< endl;
    x=17;
    dolocal();
    cerr<<"x= "<<x<<endl;
    x=18;
    doglobal();
    cerr<<"x= "<<x<<endl;
    return(0);
}

void doref(int& a)
{
    a = 3;
}

void doval(int b)
{
    b = 4;
}

void dolocal()
{
    int x;
    x=5;
}

void doglobal()
{
    x=7;
}
*/


/*
void fillArray(int a[], int size, int& numberUsed);
int search(const int a[], int numberUsed, int target);



const int SIZE_ARRAY=5;
int main()
{
    int arr[SIZE_ARRAY],listSize=SIZE_ARRAY,target,numberUsed=0;
    char ans;
    int result;
    fillArray(arr, SIZE_ARRAY, numberUsed);
    
    do
    {
        cout<<"Enter a number to search for: ";
        cin >> target;
        result = search(arr, listSize, target);
        if (result == -1)
            cout << target << " is not on the list.\n";
        else
        {
            cout<< target <<" is stored in array position " << result << endl << "(Remember the first position is 0." << endl;
            cout << "Search again > (y/n) followed by return: ";
            cin >> ans;
        }
        

    }while(ans!= 'n' &&( ans!='N'));
    cout<<"End of program. \n";
    return(0);
}

int search(const int a[],int numberUsed,int target)
{
    int index=0;
    bool found= false;
    while((!found)&& (index<numberUsed))
    {
        if(target == a[index])
            found = true;
        else
            index++;
    }
    if (found)
        return index;
    else
        return -1;
    
}

void fillArray(int a[], int size,int& numberUsed)
{
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
    << "Mark the end of the list with a negative number.\n";
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && (index < size))
    {
        a[index] = next;
        index++;
        cin >> next;
    }
    numberUsed = index;
    
}

int[] scan(int a[], int size=SIZE_ARRAY)
{
    int smallest=INT_MAX;
    int largest=0;
    int b[2] = {0,1};
    //for smallest argument
    for (int i=0; i<size; i++)
    {
        if (a[i]<=smallest)
        {
            smallest = a[i];
        }
    }
    
    for (int j=0; j<size;j++)
    {
        if ( a[j]>=largest)
        {
            largest = a[j];
        }
    }
    
    cerr<<"Smallest value is "<< smallest << endl;
    cerr<<"Largest value is "<<largest << endl;
    return b;
    
}
*/
/*
void padu();
int main()
{
    padu();
    return(0);
}

void padu()
{
    int a;
    cerr<<"Enter a value for a: ";
    cin >>a;
    cerr<<((a*100.0/2)+(a*100.0*3/4))/100<<endl;
    
}
 */
/*
#include <string>
bool isPalindrome(string);


int main()
{
    string auctionstring;
    cerr<<"Enter yo string bruh: ";
    cin >> auctionstring;
    bool tF = isPalindrome(auctionstring);
    cerr.setf(ios::boolalpha);
    cerr<<"Your answer is: " << tF <<endl;
    return(0);
}

bool isPalindrome(string s)
{
    bool result = true;
    size_t begin=0;
    size_t end= s.size() -1;
    while( begin!= end)
    {
        if (begin>end)
        {
            break;
        }
        if (s[begin] != s[end])
        {
            result = false;
            break;
        }
        begin++; end--;
        }
    return result;
    }
*/

#include <string>


int main( )
{
    char repeat='n';
    
    do
    {
        /* variables for the data read from the user */
        string name(""), gender("");
        int age(0);     /* measured in years  */
        int weight(0);  /* measured in pounds */
        int height(0);  /* measured in inches */
        bool okayToGiveBlood( false );
        
        
        const string MALE_GENDER = "Male";
        const string FEMALE_GENDER = "Female";
        const string DIFFERENT_GENDER = "Different";
        const string QUEER_GENDER = "Queer";
        const string TRANS_MALE_GENDER = "Trans Male";
        const string TRANS_FEMALE_GENDER = "Trans Female";
        enum ERRORVALUE
        {
            PERFECT=-1,
            NAME=0,
            GENDER=1,
            AGE=2,
            HEIGHT=3,
            WEIGHT=4
        };
        ERRORVALUE checkError=PERFECT;
        
        
        
        /* Prompt for the input */
        
        cout << "Donor Name: ";
        getline( cin, name );
        cout << "Gender: ";
        getline( cin, gender );
        cout << "Age: ";
        cin  >> age;
        cout << "Weight: ";
        cin  >> weight;
        cout << "Height: ";
        cin  >> height;
        
        
        cout << "--- ";
        
        
        if (name.length() == 0)
        {
            cout << "You must enter a valid name." << endl;
            checkError= NAME;
            
        }
        else if (gender != MALE_GENDER && gender != FEMALE_GENDER && gender != TRANS_MALE_GENDER && gender != TRANS_FEMALE_GENDER && gender != DIFFERENT_GENDER && gender != QUEER_GENDER)
        {
            cout << "You must enter a valid gender." << endl;
            checkError = GENDER;
            
        }
        else if (age <= 0)
        {
            cout << "You must enter a valid age." << endl;
            checkError = AGE;
            
        }
        else if (weight <= 0)
        {
            cout << "You must enter a valid weight." << endl;
            checkError=WEIGHT;
        }
        else if (height <= 0)
        {
            cout << "You must enter a valid height." << endl;
            checkError=HEIGHT;
        }
        else
        {
            /* Enforce the different parts of the donation table from the assignment */
            
            
            if (weight < 110 || age < 16)
            {
                okayToGiveBlood = false;
                
            }
            else if (gender == MALE_GENDER && (age >= 16 && age <= 22) &&   height >= 60 && weight >= 110)
            {
                okayToGiveBlood = true;
            }
            else if (gender == MALE_GENDER && age > 22 && weight >= 110)
            {
                okayToGiveBlood = true;
            }
            else if (gender == MALE_GENDER)
            {
                okayToGiveBlood = false;
            }
            else if (gender == FEMALE_GENDER && (age >= 16 && age <= 22))
            {
                if (height < 58)
                {
                    okayToGiveBlood = false;
                }
                else if (height == 58)
                {
                    if (weight >= 146)
                        okayToGiveBlood = true;
                    else
                        okayToGiveBlood = false;
                }
                else if (height == 59)
                {
                    if (weight >= 142)
                        okayToGiveBlood = true;
                    else
                        okayToGiveBlood = false;
                }
                else
                {
                    okayToGiveBlood = true;
                }
            }
            else if (gender == FEMALE_GENDER && age > 22 && weight >= 110)
            {
                okayToGiveBlood = true;
            }
            else if (gender == FEMALE_GENDER)
            {
                okayToGiveBlood = false;
            }
            else
            {
                /* handle all the other genders */
                if (age > 22)
                {
                    okayToGiveBlood = true;
                }
                else
                {
                    okayToGiveBlood = false;
                }
            }
            
            
            
            if (okayToGiveBlood)
            {
                cout << "Yes, " << name << " you can donate blood." << endl;
            }
            else
            {
                cout << "No, " << name << " you cannot donate blood." << endl;
            }
        }
        if(checkError!=PERFECT)
        {
            cerr<<"Do you want to repeat the program?(y/n)";
            cin.ignore(10000,'\n');
            cin>>repeat;
        }
    } while ( repeat!='n');
    cout<<"End of program.\n";
    return(0);
    /* Validate all the data entered by the user */
    
    
    
    
    
    return( 0 );
}

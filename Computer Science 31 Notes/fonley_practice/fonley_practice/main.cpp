#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

/*
const int MAX_OPS = 100;

struct opString {
    double d;
    char op[MAX_OPS];
    
    opString (double start, char* ops) {
        d = start;
        strcpy(op, ops);
    }
    
    double applyOp () {
        int len = strlen(op);
        if (len == 0) {
            return d;
        }
        
        for (int i = 0; i < len; i++) {
            char currentOp = op[i];
            switch (currentOp) {
                case '+':
                    d += d;
                    break;
                case '-':
                    d -= d;
                    break;
                case '^':
                    // cmath power function that raises the first
                    // argument to the power of the second and returns
                    // that value
                    d = pow(d, d);
                    break;
                case '*':
                    d *= d;
                    break;
                case '/':
                    d /= d;
                    break;
                default:
                    d++;
                    break;
            }
        }
        return d;
    }
};

int main () {
    double x = ...;
    opString op2(x, "+-+");
    cout << op2.applyOp() << endl;
}
 */

string reverse(string s) {
    // Pay attention to where we must stop.
    // Verify that s.size()/2 works for both even and odd lengths
    for (int i = 0; i < s.size() / 2; i++) {
        // Compute index from end of string
        int lastIndex = static_cast<int>(s.size()) - 1 - i;
        
        // Swap
        char tmp = s[lastIndex];
        s[lastIndex] = s[i];
        s[i] = tmp;
    }
    return s;
}

int longest_repeating_substr(string mystr) {
    int currlen = 1;
    int maxlen = 0;
    if (mystr.size() < 1) {
        return 0;
    }
    char curr = mystr[0];
    for (int i = 1; i < mystr.size(); i++) {
        if (mystr[i] == curr) {
            currlen++;
        }
        else {
            if (currlen > maxlen)
                maxlen = currlen;
            currlen = 1;
            curr = mystr[i];
        }
    }
    return maxlen;
}


#include "friend.hpp"

void changeBox(int* ptr)
{
    *ptr = 69;
}
void deleteCapitals(char* source)
{
    char* destination = source;
    for ( ; *source != '\0'; source++)
    {
        if (*source < 'A'  ||  *source > 'Z')
        {
            *destination = *source;
            destination++;
        }
    }
    *destination = '\0';  // Don't forget the zero byte at the end
}

void deleteCapitals2(char* source)
{
    char* temp = source;
    for ( ;*source != 0;source++)
    {
        if (*source < 'A' || *source > 'Z')
        {
            
        }
    }
    
    
    
}
const int MAX_SIZE =100;
/*
int main()
{
    int arr[5] ={ 1,2,3,4,5};
    int* ptr = arr;
    cout << *arr << endl;
    const int* ptr2 = arr;
    ptr2++;
    ptr++;
    cout << *ptr << endl;
    cout << *arr << endl;
    cout <<*ptr2 << endl;
    cout << reverse("Kote Savya Besar")  << endl;

    
    cout << longest_repeating_substr("aaaaabbbbcc") << endl;
    cout << (9.0+1)/2 << endl;
    cout << (11.0+0)/2 << endl;
    cout << "test"[3] << endl;

        int ruhRoh;
        int* pointy = &ruhRoh;
        cout << *pointy << endl;
    int* ptr3;
    int i =0;
    ptr3 = &i;
    *ptr3 = 100;
    cout << "Before: " << *ptr3 << endl;
    cout << "Address: " << ptr3 << endl;
    
    changeBox(ptr3);
    cout << "After: " << *ptr3 << endl;
    cout << "Address: " << ptr3 << endl;
    
    char c[MAX_SIZE] = "Hi Im Matt!";
    deleteCapitals(c);
    cout << c << endl;

    char b[MAX_SIZE] = " pantat alice sedap :)";
    strcat(c,b);
    cout << c << endl;
    
    
    

    
}
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
    char c[] = "testing";
    int len = strlen(c);
    
    for (int i = 0; i < len / 2; i++) {
        char* front = &c[i];
        char* back = &c[len - i - 1];
        char stuff = *front;
        *front = *back;
        *back = stuff;
    }
    
    cout << c << endl;
}

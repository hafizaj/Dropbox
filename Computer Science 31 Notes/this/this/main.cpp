//
//  main.cpp
//  this
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include "tire.hpp"
#include <string>

using namespace std;

#include <iostream>
#include <cctype>
#include <string>
#include <cassert>
using namespace std;
/*
// process the listing string with the format:   L#B#B+#WB
bool isValidEbayListingString( string auctionstring );
// did the listing sell?
bool listingSold( string auctionstring );

// how much did the listing sell for?    0 if it did not sell   -1 if invalid
int  howMuch( string auctionstring );

// how many watchers when the listing ended?    -1 if invalid
// whether it sold or not doesn't matter...
int  watchers( string auctionstring );

// starting with the position index, consume an integer from the string, updating the position
// return the integer found, setting isValid to true, otherwise set isValid to false
int  extractNumber( string auctionstring, int& index, bool& isValid );

bool isValidEbayListingString( string auctionstring )
{
    int listAmount( 0 );
    int bidAmount( 0 );
    int bidIncrement( 0 );
    int numberOfWatchers( 0 );
    bool isValid( false );
    bool openingBid( true );
    int index( 0 );
    
    if (auctionstring.length() > 1 &&
        (auctionstring[index] == 'l' || auctionstring[index] == 'L'))
    {
        isValid = true;
        index = index+1;
        // extract a integer found at the position index
        listAmount = extractNumber( auctionstring, index, isValid );
        if (isValid && index < auctionstring.length())
        {
            do
            {
                switch( auctionstring[ index ] )
                {
                    case 'w':
                    case 'W':
                        numberOfWatchers = numberOfWatchers + 1;
                        index = index + 1;
                        break;
                    case 'u':
                    case 'U':
                        numberOfWatchers = numberOfWatchers - 1;
                        if (numberOfWatchers < 0)
                        {
                            isValid = false;
                            break;
                        }
                        index = index + 1;
                        break;
                    case 'b':
                    case 'B':
                        index = index + 1;
                        if (index < auctionstring.length())
                        {
                            if (auctionstring[index] == '+' && !openingBid)
                            {
                                index = index + 1;
                                // bid increment
                                bidIncrement = extractNumber( auctionstring, index, isValid );
                                bidAmount += bidIncrement;
                            }
                            else if (openingBid)
                            {
                                // starting bid
                                bidAmount = extractNumber( auctionstring, index, isValid );
                                openingBid = false;
                            }
                            else
                            {
                                isValid = false;
                            }
                        }
                        else
                        {
                            isValid = false;
                        }
                        break;
                    default:
                        isValid = false;
                        break;
                }
            } while (index < auctionstring.length() && isValid);
        }
    }
    
    return( isValid );
}

// did the listing sell?
bool listingSold( string auctionstring )
{
    bool sold( false );
    int listAmount( 0 );
    int bidAmount( 0 );
    int bidIncrement( 0 );
    bool isValid( false );
    int index( 0 );
    
    
    if (isValidEbayListingString( auctionstring ))
    {
        if (auctionstring.length() > 1 &&
            (auctionstring[index] == 'l' || auctionstring[index] == 'L'))
        {
            isValid = true;
            index = index+1;
            // extract a integer found at the position index
            listAmount = extractNumber( auctionstring, index, isValid );
            if (isValid && index < auctionstring.length())
            {
                do
                {
                    switch( auctionstring[ index ] )
                    {
                            // we can ignore all the watchers
                        case 'w':
                        case 'W':
                        case 'u':
                        case 'U':
                            index = index + 1;
                            break;
                        case 'b':
                        case 'B':
                            index = index + 1;
                            if (index < auctionstring.length())
                            {
                                if (auctionstring[index] == '+')
                                {
                                    index = index + 1;
                                    // bid increment
                                    bidIncrement = extractNumber( auctionstring, index, isValid );
                                    bidAmount += bidIncrement;
                                }
                                else
                                {
                                    // starting bid
                                    bidAmount = extractNumber( auctionstring, index, isValid );
                                }
                            }
                            else
                            {
                                isValid = false;
                            }
                            break;
                        default:
                            isValid = false;
                            break;
                    }
                } while (index < auctionstring.length() && isValid);
            }
        }
        
    }
    sold = (bidAmount > listAmount);
    return( sold );
}

// how much did the listing sell for?    0 if it did not sell   -1 if invalid
int howMuch( string auctionstring )
{
    bool isValid( true );
    int index( 0 );
    int bidAmount( 0 );
    int bidIncrement( 0 );
    if (isValidEbayListingString(auctionstring))
    {
        if (listingSold(auctionstring))
        {
            // we just need to add up all the bids...
            do
            {
                switch( auctionstring[ index ] )
                {
                    case 'b':
                    case 'B':
                        index = index + 1;
                        if (index < auctionstring.length())
                        {
                            if (auctionstring[index] == '+')
                            {
                                index = index + 1;
                                // bid increment
                                bidIncrement = extractNumber( auctionstring, index, isValid );
                                bidAmount += bidIncrement;
                            }
                            else
                            {
                                // starting bid
                                bidAmount = extractNumber( auctionstring, index, isValid );
                            }
                        }
                        break;
                    default:
                        index = index + 1;
                        break;
                }
            } while (index < auctionstring.length());
        }
    }
    else
    {
        bidAmount = -1;   // if invalid
    }
    return( bidAmount );
}

// how many watchers?    0 if none     -1 if invalid
int  watchers( string auctionstring )
{
    int index( 0 );
    int numberOfWatchers( 0 );
    if (isValidEbayListingString(auctionstring))
    {
        // we just need to add up all the watchers...
        do
        {
            switch( auctionstring[ index ] )
            {
                case 'w':
                case 'W':
                    numberOfWatchers = numberOfWatchers + 1;
                    index = index + 1;
                    break;
                case 'u':
                case 'U':
                    numberOfWatchers = numberOfWatchers - 1;
                    index = index + 1;
                    break;
                default:
                    index = index + 1;
                    break;
            }
        } while (index < auctionstring.length() );
    }
    else
    {
        numberOfWatchers = -1;   // if invalid
    }
    return( numberOfWatchers );
}

int extractNumber( string commands, int& index, bool& isValid )
{
    // track the integer value found
    int quantity( 0 );
    // the number cannot start with a zero!
    if (commands[index] >= '1' && commands[index] <= '9')
    {
        // the number should be made up of digits
        while( index < commands.length()  &&  isdigit( commands[ index ] ) )
        {
            // extract one digit and add it to the cumulative value held in quantity
            int digit = commands[ index ] - '0';
            quantity = quantity * 10 + digit;
            index = index + 1;
        }
    }
    // once we run out of digits to consume, the cumulative quantity must not still be zero
    // and cannot be more than three digits long
    isValid = (quantity != 0);
    return( quantity );
}
int main( ) {
    string auctionString;
    cout << "auctionString:";
    cin >> auctionString;
    if (isValidEbayListingString(auctionString))
    {
        cout << "valid!" << endl;
        
        cout << "listingSold( auctionString ) = " << listingSold( auctionString ) << endl;
        cout << "howMuch( auctiongString ) = " << howMuch( auctionString ) << endl;
        cout << "watchers( auctionString ) = " << watchers( auctionString ) << endl;
    }
    cout << "DONE!" << endl;
}
*/

/*
bool isPrime(int number)
{
    bool result = true;
    if ( number <=1)
    {
        return false;
    }
    for(int i=2;i<number ; i++)
    {
        if ( number%i ==0)
        {
            result = false;
            break;
        }
    }
    return result;
}
Given pointer to start of array of ints and an index in that array,
 returns true if element at passed index appears at any previous indeces
 i.e. is a repeat and not unique
 
bool hasAppearedBefore(int* numList, int index) {
    int number = numList[index];
    for (int j = 0; j < index; j++) { //All indeces that come before index i
        if (numList[j] == number) //Has appeared before in the list
            return true;
    }
    
    //No duplicates found in previous indeces
    return false;
}
int countUniquePrimeNumbers(int* arr, int n)
{
    if ( arr == nullptr || n < 0)
    {
        return -1;
    }
    int numprimes =0;
    for(int i=0;i < n; i++)
    {
        if (isPrime(*arr))
        {
            numprimes++;
        }
        arr++;
    }
    return numprimes;
}

int main()
{
 
    for (int i=2;i< 100 ; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
 
    
    int arr[] = {2,3,7,11,13,1,1,1,1};
    cout << countUniquePrimeNumbers(arr, 10) << endl;
}
*/

#include <cstring>
int main()
{
    /*
    char c[100] = "Howie!" ;
    char d[100] = "Convictions";
    strcpy(c, d);
    for(int i=0;i< 12; i++)
    {
        cout << c[i];
    }
    cout << endl;
    return(0);
     */
    char var[3];
    strcpy(var, "A Nice Long string");
    for (int i=0;i<4;i++)
    {
        cout << var[i] << endl;
    }
}

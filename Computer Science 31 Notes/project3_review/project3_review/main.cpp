//
//  main.cpp
//  project3_review
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 3/15/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <string>
#include <cassert>
using namespace std;

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

void buyItNow(string auctionstring);

bool isValidEbayListingString( string auctionstring )
{
    int listAmount( 0 );
    int bidAmount( 0 );
    int bidIncrement( 0 );
    int numberOfWatchers( 0 );
    bool isValid( false );
    bool openingBid( true );
    int index( 0 );
    int buyNowPrice(0);
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
                            
                            if(auctionstring[index] == 'N' && !openingBid)
                            {
                                index = index + 1;
                                buyNowPrice = extractNumber(auctionstring, index, isValid);
                                
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

void buyItNow(string auctionstring)
{
    int index( 0 );
    int buyNowPrice(0);
    int bidAmount(0);
    int bidIncrement(0);
    bool openingBid(true);
    bool isValid(true);
    if (isValidEbayListingString(auctionstring))
    {
        do
        {
            switch( auctionstring[ index ] )
            {
                case 'B':
                case 'b':
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
                        
                        if(auctionstring[index] == 'N' && !openingBid)
                        {
                            index = index + 1;
                            buyNowPrice = extractNumber(auctionstring, index, isValid);
                            
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
                    index = index + 1;
                    break;
            }
        }while (index < auctionstring.length() );
        cout << "The item was purchaes at price: " << buyNowPrice << " !\n";
        
        
    }
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
        cout << "buyItNow( auctionString ) = " ;
        buyItNow(auctionString);
        cout << endl;
    }
    cout << "DONE!" << endl;
}



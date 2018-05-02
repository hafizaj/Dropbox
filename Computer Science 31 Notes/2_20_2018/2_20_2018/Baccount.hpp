//
//  Baccount.hpp
//  2_20_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 2/20/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#ifndef Baccount_hpp
#define Baccount_hpp

#include <stdio.h>
namespace cs31
{
    //once you decalre it, you can put any kind of stuff in it.
    //this is cs31::bankaccount class
//.h file needs the namespace declaration.
//.cpp also needs the namespace declaration
    
    
    
    
/*
 namespace is to disambiguate code form other 
 
 
 
 
 */
    
    
    
    
    
} //closes the namespace declaration
/*
 a declaration you wrap your code around it.
 
 
 class code needs to say:
 namespace cs31
 
 
 driver code needs to say :
 
 using namespace cs31
 the driver code
 
 using namespace std, cs31 ; is ILLEGAL 
 
 
 */
/*
 double bankAccount :: balance()
 accessor method -- access the data and return it ,
 
 double Bankaccount::balance() const
 {
 return(my_balance);
 }
 
 double bankAccount::name() const <--- getter operation :: doesnt change anything about the valeus fed into
 {
 return(my_name);
 }
 
 
 //mutator methods --- changing a data value
 // used to have one value , not it has some other value
 // NOT a read-only operation
 
 void bankAccount::SetName(string value)
 {
 my_name = value;
 
 }
 
 
 //accessors
 ---double
 
 if you put it into the header file, you need to transfer it into the .cpp file too.
 
*/


#endif /* Baccount_hpp */

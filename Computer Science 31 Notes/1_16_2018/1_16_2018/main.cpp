//
//  main.cpp
//  1_16_2018
//
//  Created by Ahmad Hafizuddin Bin Ahmad Jaafar on 1/16/18.
//  Copyright © 2018 Ahmad Hafizuddin Bin Ahmad Jaafar. All rights reserved.
//

#include <iostream>
#include <string> //to actually access string

/*
 
 
 take
 
 
 
 
 C++ is goign to choke on the
 German_Shepard - will only be printed
 
 string handling in c++ is terrible
 you need someting different
 read up until a space and then its going to
 
 when youre dealing with text, you have to be careful
 
 
 Notes:
 
 1) String handling in c++ is messy:
  << breaks on space
 
 << reading all leading white space and ignores it ( meaningful letters or numbers as the data)

 Read in "German Sheperd " cannot use the <<
 
The way you read a whole line of data at once is by
 getline ( cin, string variable );
HOWEVER, getline breaks on newline ( getline will read a whole pile of text , but breaks on newline )
 
 
 
 
*/


// ex string s;
// getline ( cin , s) ,

/*
 german_sheperd \n
 when you mix << with getline function
 
 Testing
 
 int age;   // >> breaks on white space , eats only the leading white space.
 cin >> age ;
 string s;
 cin.ignore( INTMAX , '\n');  //intmax is a predefined constant #include <climit>
 getline( cin, s) ;
 
 the '\' is an escape charater , this is the character newline.
 cin.ignore purges \n so that we can reach "German shepperd"
 
 
 input console :
 14 \n      // getline stops at new line so that calls to get line actually gets German_shepperd
 German_shepperd \n
 
 getline is going to read 14 and breaks at \n,
 
 Before using getline, we have to push past \n
 
 
 
 */





/*
 if ( condition eg: actualAge == 14 ) // same as phyton , double equal is the true false qeustion / single equal is an assignment operator.
 {
  //only run if the true/false question = true .
  //only going to run if question is true
 }
 
 string gender == "MALE" ;
 if ( gender == "MALE" )
 {
    //fixed alternative
    if your body of your statement is one statement long, then you dont need squiggles;
 }
 
 else
 {
 }
 
 -----------------------------------------------------------
 if (actualAge < 14)
 {
 }
 
 else if ( actualAge >= 16 && actualAge <= 22)   /  <&&> short for and but  <||> is short for or
 {
 }
 
 else
 {
 }
 
 && is only going to be true if every variable is true
 || if one is true, then the whole statement is true (only one true can allow everythign to be true.)
 
 Protip>
 Letters are Case-sensitive:
 ee
 
 #if you want to change your precision, just retype  the hoooooooooo djtijgl
 
 Revisiting Character Data
 
 
 Not a primitive data
 
 Must include #incldue <string>
  operator + will concatenate two strings together
 cin >> aString will read up to the first whitespace only.
 
 
 Important string handloing detail
 
 cin >> eats leading whitepsce but bteaks on space
 
 getline(cin , astring)
 
 reads a textual line ending
 
 
 cin >> actualAge;
 cin.ignore ( INT_MAX
 
 constants -------
 
 
 const - to mark something as a read only value. value cannot be changed after assignment
 
 const double PI = 3.14159....
 const int LIMIT = 15...
 will not be varied at runtime.
 
 try setting things in capital letters as something that you cant change
 constants are not going to
 not an l-value (initializer locked down cannot be changed
 p-value is stored in
 
 */




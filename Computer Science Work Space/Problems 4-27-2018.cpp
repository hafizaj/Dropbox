// Stack using Linked List

// class Stack()
// {
// public:
// 	Stack();
// 	void push(int i);
// 	int pop();

// private:
// 	struct Node
// 	{
// 		int data;
// 		Node* next;
// 		Node* prev;

// 	};
// 	Node* head;
// 	Node* tail;

// }

#include <queue>
#include <stack>
#include <string>
#include <iostream>
#include <cassert>
using namespace std;


// string solution to correctParens
bool correctParens(string s) {
	
}


// check to see if str is a palindrome
// aka reads the same forwards and backwards
bool palindrome(string str) 
{
	//	Create the stack first
	stack<char> s;
	int pos=0;
	for(;	i<str.size()/2	;pos++)	//	What happens if the string is an odd integer
	{
		s.push(str[pos]);
	}

	//	Odd
	if(str.size() % 2 == 1)
	{
		pos++;
		for(int i=0;i < (size()/2)-1 ;i++)
		{
			if(s.top() != str[pos])
				return false;
			s.pop();
		}

	}

//	Pseudocode
//	push the first half of the string into the stack


}


// list of size n, every mth person dies
int dontGetKilled(int m, int n) 
{
	
}


// class with functions push, pop, top, and getting the minimum
// element immediately - without shifting anything around
class MinStack {
public:
	MinStack() {}
	
	// s1 always contains the most recently inserted always
	// but s2 has it when it's the new smallest
	void push(int x) {
		
	}

	// pop off the top of the stack
	void pop() {
		
	}

	// give back the top element of the stack
	// minimum or not
	int top() {
		
	}

	// gives back the min immediately
	int getMin() {

	}

private:
	// any data members you want can go here
};

class CoolQ
{
public:
	void push(int val);
	int pop();		//-1 empty
private:
	stack<int> first;
	stack<int> second;
};



int main() 
{
	assert(dontGetKilled(2,7) == 7); // 7
	assert(dontGetKilled(3,5) == 4); // 4
	assert(dontGetKilled(3,4) == 1); // 1

	MinStack ms;
	ms.push(-2);
	ms.push(0);
	ms.push(-3);
	assert(ms.getMin() == -3); // -3
	ms.pop();
	assert(ms.top() == 0); // 0
	assert(ms.getMin() == -2); // -2

	assert(palindrome("abba")  == true); // true
	assert(palindrome("waterretaw") == true); // true
	assert(palindrome("abcdcbX") == false); // false
	assert(palindrome("abcba") == true); // true
	assert(palindrome("trevor") == false); // false

	cout << "PASSED!!!" << endl;

	return 0;
}

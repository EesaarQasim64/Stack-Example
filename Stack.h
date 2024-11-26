#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

class Stack
{
	public:
		Stack();
		~Stack();
		void printTop();
		int getTopValue();
		void printStack();
		bool emptyCheck();
		void pushStack(int);
		void popStack();

	private:
		int* myStack;
		int top;
};

#endif
#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
	top = -1;
	myStack = new int[20];
}

Stack::~Stack()
{

}

void Stack::printTop()
{
	cout << "Top index is " << top << endl;
}

int Stack::getTopValue()
{
	return myStack[top];
}

void Stack::printStack()
{
	for (int i = 0; i < 20; i++)
	{
		cout << myStack[i] << "  ";
	}

	cout << endl;
}

bool Stack::emptyCheck()
{
	if (top == -1)
	{
		return true;
	}

	else
	{
		return false;
	}
}

void Stack::pushStack(int pushValue)
{
	if (top == 19)
	{
		cout << "Stack overflow" << endl;
	}
	else
	{
		top++;
		myStack[top] = pushValue;
	}
}

void Stack::popStack()
{
	if (top == -1)
	{
		cout << "Stack underflow" << endl;
	}
	else
	{
		top--;
	}
}
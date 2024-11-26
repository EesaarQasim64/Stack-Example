#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack myS;
	myS.printTop();
	cout << endl;

	bool isEmpty;
	isEmpty = myS.emptyCheck();
	cout << "Is the stack empty? -> " << isEmpty << endl;

	myS.pushStack(10);
	isEmpty = myS.emptyCheck();
	cout << "Stack empty? " << isEmpty << endl;
	myS.printStack();

	int topVal = myS.getTopValue();
	cout << "Top Value is " << topVal << endl;

	myS.pushStack(22);
	myS.printTop();
	myS.printStack();

	myS.popStack();
	topVal = myS.getTopValue();
	cout << "Top value is " << topVal << endl;
	myS.printStack();
	myS.pushStack(44);
	myS.printStack();

	cout << endl;
	system("pause");
}
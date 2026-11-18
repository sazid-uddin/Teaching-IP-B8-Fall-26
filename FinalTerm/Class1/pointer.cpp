#include <iostream>
using namespace std;

int main()
{
	// vairable and its address (& operator)
	int a = 5;
	cout << "Value of a: " << a << endl;
	cout << "Memory location of a: " << &a << endl;

	int* addr; // pointer declaration
	addr = &a; // pointer initialization
	// int* addr = &a; // both together
	cout << "Value of pointer addr: " << addr << endl;
	cout << "Value stored in addr: " << *addr; // indirection operator

	// * symbol used in two different ways
	// 1. pointer declaration
	// int* x;
	// 2. after pointer declaration 
	// -> accessing value at that address
	// *x;

	// character pointer
	char c = 'X';
	char* char_addr = &c;

	// pointer to double
	double d = 3.14;
	double* double_addr = &d;

	// wrong setup
	// int pointer pointing to a char variable
	char c1 = '0';
	int* p1 = &c1;

	// correct setup
	char* p2 = &c1;

	// check both setup
	cout << *p2 << endl;
	cout << *p1 << endl;


    return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int a1 = 2;
	float b = 2.0;

	// integer division: int / int -> int
	cout << a / a1 << endl;
	cout << 5 / 2 << endl; // 2.5 -> 2 (discard fraction)
	// floating point division: int / float -> float | float / int -> float | float / float -> float
	cout << a / b << endl;
	cout << 5 / 2.0 << endl;

	// type casting operator: conversion of one data type to another data type
	cout << a / (float) a1 << endl;
	cout << 5 / (float) 2 << endl;
	cout << 5 / 2.0 << endl; // 2.5

	cout << (int) 5.5 << endl; // 5

	cout << (bool) -5 << endl;

	cout << (char) 65 << endl;

	cout << (int)'a' << endl;

	cout << (float)'a' << endl;
	cout << (bool)'a' << endl;

	// assignemnt operator variation
	// 1. =
	int d = 5+2;
	// 2. +=
	d += 5+2; // d = d + (5+2);
	// 3. -=
	d -= 5+2; // d = d - (5+2);
	// 4. *=
	d *= 5+2; // d = d * (5+2);
	// 5. /=
	d /= 5+2; // d = d / (5+2);
	// 6. %=
	d %= 5+2; // d = d % (5+2);
}
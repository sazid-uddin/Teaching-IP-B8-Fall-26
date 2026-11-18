#include <iostream>
using namespace std;

int main()
{
	// // program to take input and calculate sum of 1 million numbers

	// int numbers[10];
	// // int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	// // cout << "Enter 10 numbers: ";
	// // cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

	// // for loop needs three things
	// // 1. loop control variable initialization: (int i = 0)
	// // 2. loop exit condition: i < 10
	// // 3. loop control variable update: i++
	// for (int i = 0; i < 10; i++) {
	// 	cout << "Enter number " << i+1;
	// 	cin >> numbers[i];
	// }

	// int sum = 0;
	// for (int i = 0; i < 10; i++) {
	// 	sum += numbers[i];
	// }

	// cout << "Sum: " << sum << endl;

	// increment vs decrement (unary operator)
	// pre vs post

	int i = 2;
	cout << i++ << endl; // post increment: increment later, rest of the statement now
	cout << i << endl;
	// cout << i-- << endl; // post decrement: decrement later, rest of the statement now

	// cout << ++i << endl; // pre increment: increment first, rest later
	// cout << --i << endl; // pre decrement: decrement first, rest later

	// Simple examples: increment adds 1 and decrement subtracts 1.
	int number = 5;
	number++;
	cout << "5 + 1 = " << number << endl;

	int another_number = 5;
	another_number--;
	cout << "5 - 1 = " << another_number << endl;

	// Example 1: post-increment uses the old value in the equation, then updates it.
	int a = 2, b = 3, c = 4;
	int result1 = a++ + b * c;
	// result1 = 2 + (3 * 4) = 14; a is now 3.
	cout << "a++ + b * c = " << result1 << ", a = " << a << endl;

	// Example 2: pre-decrement updates the value before using it in the equation.
	int x = 8, y = 3, z = 2;
	int result2 = x - --y * z;
	// result2 = 8 - (2 * 2) = 4; y is now 2.
	cout << "x - --y * z = " << result2 << ", y = " << y << endl;


	return 0;
}
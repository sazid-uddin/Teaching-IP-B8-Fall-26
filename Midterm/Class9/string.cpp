#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int arr[10];
	// char c_arr[] = {'H', 'e', 'l', 'l', 'o', '!'};
	// char array
	char c_arr[10] = {'H', 'e', 'l', 'l', 'o', '!'}; // rest 4 are initialized to 0
	// char c_arr[10]; // all are initialized with garbage value
	// char c_arr[10] = { }; // all 10 are initialized with 0

	for (int i = 0; i < 6; i++) {
		cout << c_arr[i];
	}

	cout << endl;
	// string
	cout << "Hello!";


	// to make a copy of an array
	char c_arr_copy[100];

	for (int i = 0; i < 6; i++) { // you must have the count of elements
		c_arr_copy[i] = c_arr[i];
	}

	string str;
	str = "Hello from string!";
	cout << str;

	string str2 = "Hello!";
	char str2_c[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'}; // \0 is the null character
	// \n is a new line character
	// \t is tab character
	// and there are more Escape Character

	cout << str2_c;

	cout << endl << endl;
	char new_char_arr[] = {'a', 'b', '\0', 'c', '\0'};
	// string new_str = "abc";
	cout << new_char_arr;


	return 0;
}
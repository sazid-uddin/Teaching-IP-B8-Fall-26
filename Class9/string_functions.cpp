#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	// strcat(s1,s2) -> string concatenation (putting two strings together)
	char str1[] = "ABC";
	// char str1[] = {'A', 'B', 'C', '\0'};
	// these two lines equivalent
	char str2[] = "XYZ";
	// ABCXYZ
	// str1 + str2;

	// cout << strcat(str1, str2);
	cout << str1;

	// strcmp (s1, s2) -> comparing two string
	cout << endl
		 << strcmp(str1, str2);
	// returns -23: str1 ("ABC") is less than str2 ("XYZ") "ABC" < "XYZ"
	// cout << endl << strcmp(str2, str1);
	// returns 23: str2 ("XYZ") is greater than str1 ("ABC") "XYZ" > "ABC"
	// cout << endl << strcmp(str1, str1);
	// returns 0: str1 ("ABC") is equal to str1 ("ABC") "ABC" == "ABC"

	// "A" -> 65
	// "B" -> 66
	// "AB" -> 65+66 -> 131
	// "XY" -> 90+91 -> 181
	// 131 < 181

	// strcpy(s1, s2): copy one string into another
	cout << endl
		 << strcpy(str1, str2);

	char str_to_copy[] = "Hello";
	int len = strlen(str_to_copy);
	char copy[len];
	strcpy(copy, str_to_copy);

	cout << copy;

	// strlen(s): returns length of the string
	char s[] = "Hello";
	// char s[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	cout << endl
		 << strlen(s); // does not count null character
	cout << endl
		 << sizeof(s); // counts null character
	// how much space does the variable take

	// Consider the following two declarations. Which best represents their array contents?
	// 1) char x[] = "";    and   2) char x[] = "x";
	// (A)		[ ] and ['x']	// misdirect
	// (B)		['\0'] and ['x']	// misdirect
	// (C)		['\0'] and ['x', '\0']	 // correct
	// (D)		['0'] and ['x', 'x', '\0'] // incorrect

	return 0;
}
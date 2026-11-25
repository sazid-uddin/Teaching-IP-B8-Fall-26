#include <iostream>
using namespace std;

// syntax of a function
// return-type function-name (inputs/parameters/arguments) {
//    function body
// }

// addition function
int addition (int a, int b) {
	return a+b;
}

int subtract(int a, int b) {
	return a-b;
}

int multiplication(int a, int b) {
	return a*b;
}

float division(int a, int b) {
	if (b == 0) {
		return 0;
	} else {
		return a/b;
	}
}

int mod (int a,int b) {
	return a%b;
}

// function with no input and no output
void greeting () {
	cout << "Good morning" << endl;
}

float distributor(char operation, int n1, int n2) {
	float result;
	if (operation == '+') {
		result = (float)addition(n1, n2);
	} else if (operation == '-') {
		result = (float)subtract(n1, n2);
	} else if (operation == '*') {
		result = (float)multiplication(n1, n2);
	} else if (operation == '/') {
		result = division(n1, n2);
	} else if (operation == '%') {
		result = (float)mod(n1, n2);
	}
	return result;
}

float userInput(void) {
	cout << "Please enter the first number: ";
	float n1;
	cin >> n1;
	cout << "Please enter the second number: ";
	float n2;
	cin >> n2;
	cout << "Please enter the symbol for the operation: "; 
	char operation;
	cin >> operation;
	// return n1, n2, operation; // impossible
	float result = distributor(operation, n1, n2);
	return result;
}


int main(void) {
	// Calculator in C++
	float result = userInput();

	cout << "Result: " << result;

	return 0;
}
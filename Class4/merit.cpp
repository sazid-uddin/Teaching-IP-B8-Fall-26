#include <iostream>
using namespace std;

int main () {
	// take inputs

	// floating point number
	float cgpa;
	cout << "Please enter CGPA: ";
	cin >> cgpa;

	// integer number
	int credit; // declarartion
	credit = 12; // assignment
	int credit = 12; // definition = declaration + assignment
	cout << "Please enter credits: ";
	cin >> credit;

	// boolean value
	bool failed;
	cout << "Please enter 1 if the student failed any courses (enter 0 otherwise): ";
	cin >> failed;

	// check eligibility
	if (credit < 12 || failed) // "failed" is equivalent to "failed == 1", "failed == 0" is equivalent to "!failed"
	{
		cout << "No Waiver";
	}
	else 
	{
		// cgpa check
		if (cgpa >= 3.90 && cgpa <= 4.00) {
			cout << "100%";
		}
		else if (cgpa >= 3.75 && cgpa < 3.9) {
			cout << "50%";
		} else if (cgpa >= 3.5 && cgpa < 3.75) {
			cout << "25%";
		} else if (cgpa >=0.0 && cgpa < 3.5) {
			cout << "No waiver";
		} else {
			cout << "Invalid CGPA";
		}

	}
	return 0;
}

// double f;
// float f;

// char c;
// c = '$';

// float int; // key word
// case sensitivity
// int sum;
// int Sum;
// int SUM;
// int sUM;
// int sUm;
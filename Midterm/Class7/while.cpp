#include <iostream>
using namespace std;

int main()
{
    // for(int i = 0; i<100; i++) {

	// }


	// while (i < 100) {
	// 	// statement (loop body)
	// }

	// Problem:
	// Take a negative input from user. If the user inputs a positive number,
	// ask the user to input again

	int n;
	cout << "Please enter a negative number: ";
	cin >> n;

	while (n >= 0) {
		cout << "Invalid input. Please try again: ";
		cin >> n;
	}

	cout << "Congratulations. You have entered a negative number;" << endl;

    return 0;
}
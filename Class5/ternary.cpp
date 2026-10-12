#include <iostream>
using namespace std;

int main()
{
	int a = 5;

	if (a > 0) {
		cout << "a is positive" << endl;
	} else {
		cout << "a is negative" << endl;
	}

	cout << (a > 0) ? "a is positive" : "a is negative";
	cout << endl;

	int b = (a > 0) ? 5 : -5;
    

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int day = 3;

	if (day == 1) {
		cout << "Sunday";
	} else if (day == 2) {
		cout << "Monday";
	} else if (day == 3) {
		cout << "Tuesday";
	} else if (day == 4) {
		cout << "Wednesday";
	} else if (day == 5) {
		cout << "Thursday";
	} else if (day == 6) {
		cout << "Friday";
	} else if (day == 7) {
		cout << "Saturday";
	} else {
		cout << "Invalid day";
	}

	// when one variable's multiple values need to be checked, 
	// switch statement is more efficient than if-else-if statement
	switch (day) {
		case 1:
			cout << "Sunday";
			break;
		case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tuesday";
			break;
		case 4:
			cout << "Wednesday";
			break;
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
			break;
		case 7:
			cout << "Saturday";
			break;
		default:
			cout << "Invalid day";
			break;
	}

    return 0;
}
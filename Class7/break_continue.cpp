#include <iostream>
using namespace std;

int main()
{
	int i;
	// for (i = 1; i <= 10; i++) {
	// 	if (i == 5) {
	// 		break; // exit the loop
	// 	}
	// 	cout << i << endl;
	// }

	// cout << "Loop ended with value of i: " << i << endl;
	// // i is out of scope
	// // i's scope is the for loop

	for (i = 1; i <= 10; i++) {
		if (i == 5) {
			continue; // skips this iteration
		}
		cout << i << endl;
	}
    return 0;
}
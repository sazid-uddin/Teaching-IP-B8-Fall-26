#include <iostream>
using namespace std;

int main()
{
	int n, nth_triangual_num = 0;
	cin >> n;

	// 1 + 2 + 3 + ... + n
	//                     i
	// for (int i = 1; i <= n; i++) {
	// 	nth_triangual_num = nth_triangual_num + i;
	// }

	int i = 1;
	while (i <= n)
	{
		nth_triangual_num = nth_triangual_num + i;

		i++;
	}

	cout << n << "th triangular number is: " << nth_triangual_num << endl;

	// Homework: Print all triangular numbers upto N

	return 0;
}
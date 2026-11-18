#include <iostream>
using namespace std;

int main()
{
	// const int a = 5;
	// a = 10;

	const float pi = 3.14;
	// pi = 3.14;

	const int row = 5;
	const int col = 3;

	// clear initialization
	// 5x3 size
	int arr[2][3] =
		{
			{1, 2, 3},
			{2, 3, 4},
	};
	// int arr[row][col] = {1,2,3,2,3,4,3,4,5};
	// int a[5] = {1, 2};
	// cin >> arr[0][0];
	// cout << arr[0][0];
	// cout << arr[1][0];
	// cout << arr[4][2];

	// 2d array output
	// nested loop
	for (int i = 0; i < 2; i++) // outer loop
	{
		for (int j = 0; j < 3; j++) // inner loop | column interation
		{
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}

	// 2d array input
	// nested loop
	for (int i = 0; i < 2; i++) // outer loop
	{
		for (int j = 0; j < 3; j++) // inner loop | column interation
		{
			cout << "Please enter value for [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}

	// sum of elements of 2d array
	int sum = 0;
	for (int i = 0; i < 2; i++) // outer loop
	{
		for (int j = 0; j < 3; j++) // inner loop | column interation
		{
			sum += arr[i][j];
		}
	}

	// row wise sum of elements of 2d array
	for (int i = 0; i < 2; i++) // outer loop
	{
		int row_sum = 0;
		for (int j = 0; j < 3; j++) // inner loop | column interation
		{
			row_sum += arr[i][j];
		}
		cout << "Row "<< i <<" sum: " << row_sum << endl;
	}
	// 	{
	// 		{1, 2, 3}, = 6
	// 		{2, 3, 4}, = 9
	// };
	// Row 0 sum: 6
	// Row 1 sum: 9

	return 0;
}
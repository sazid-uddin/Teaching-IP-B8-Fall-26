#include <iostream>
using namespace std;

int main()
{
	// if statement
	// Run the block only when cond is true; otherwise execution skips to statement3.
	statement0;

	if (cond) {
		statement1;
		statement2;
	}

	statement3;
	statement4;


	// if-else statement
	// Exactly one branch runs: the first when cond is true, otherwise the else branch.
	statement0;
	if (cond) {
		statement1;
		statement2;
	} else {
		statement3;
		statement4;
	}

	statement5;


	// if-else-if statement
	// Conditions are checked in order, and only the first matching branch runs.
	// The final else handles the case where none of the conditions is true.
	statement0;
	if (cond1) {
		statement1;
	} else if (cond2) {
		statement2;
	} else if (cond3) {
		statement3;
	} else {
		statement4;
	}

	statement5;

	// leap year logic
	// A year is a leap year if it is divisible by 4 but not by 100,
	// or if it is divisible by 400. The parentheses make the intended
	// grouping explicit: both parts of the first rule must be true.
	// Here, rem_4, rem_100, and rem_400 represent remainders after division
	// by 4, 100, and 400, respectively.
	// (rem_4 == 0 && rem_100 != 0) || rem_400 == 0

	// These expressions are logically equivalent because && has higher
	// precedence than ||; adding parentheses can make that grouping clearer.
	(cond1 && cond2) || cond3

	// Order doesn't matter for || and && operators
	cond3 || (cond1 && cond2)

    return 0;
}
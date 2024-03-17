#include<iostream>

using namespace std;

/*
Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.
*/

int main() {
	int n, oddSum, evenSum, digit;
	cin >> n;

	oddSum = evenSum = 0;

	while(n > 0) {
		digit = n%10;

		if(digit % 2 == 0) {
			evenSum += digit;
		}

		else {
			oddSum += digit;
		}

		n /= 10;
	}

	cout << evenSum << " " << oddSum << endl;
	
	return 0;
}

/*
Sample Input 1: 
132456

Sample Input 2:
552245
*/

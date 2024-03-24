#include<iostream>

using namespace std;

/*
Find the number of digits of ‘n’ that evenly divide ‘n’.
*/

int countDigits(int n){
	int temp = n;
	int count = 0;
	int digit;

	while(temp > 0) {
		digit = temp % 10;

		if(digit != 0) {
			if (n % digit == 0) {
			count += 1;
			}
        }

		temp /= 10;
    }

	return count;
}

int main() {
    int n;
    cin >> n;

    int res = countDigits(n);

    cout << res << endl;

    return 0;
}

/*
Sample Input 1:
35

Sample Input 2: 
373

Sample Input 3: 
660
*/

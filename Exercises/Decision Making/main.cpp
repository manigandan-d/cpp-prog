#include <bits/stdc++.h>

using namespace std;

// Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.

string compareIfElse(int a, int b) {
	if(a < b) 
		return "smaller";

	else if(a > b) 
		return "greater";

	else 
		return "equal";
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << compareIfElse(a, b) << endl;

    return 0;
}

// Sample Input 1
// 5 2 

// Sample Input 2 
// 2 2

// Sample Input 3 
// 3 8

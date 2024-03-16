#include <bits/stdc++.h>

using namespace std;

/*
Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte

You’re given a data type. Print its size in bytes.
*/

int dataTypes(string type) {
	if(type == "Integer")
		return 4;

	else if(type == "Long") 
		return 8;

	else if(type == "Float") 
		return 4;

	else if(type == "Double") 
		return 8;

	else  
		return 1;
}

int main() {
	string data;
	cin >> data;

	cout << dataTypes(data) << endl;
}

/*
Sample Input 1 
Long

Sample Input 2 
Float
*/

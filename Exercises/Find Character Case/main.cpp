#include <bits/stdc++.h>

using namespace std;

/* 
Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.
*/

int main() {
	char ch;
	cin >> ch;

	if(ch >= 'A' && ch <= 'Z') {
		cout << "1";
	}
	else if(ch >= 'a' && ch <= 'z') {
		cout << "0";
	}
	else {
		cout << "-1";
	}
	
}

/*
Sample Input 1
v

Sample Input 2 
D

Sample Input 3 
# 
*/

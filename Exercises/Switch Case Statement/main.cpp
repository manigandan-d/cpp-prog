#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.

There are 2 choices in the menu:

Choice 1 is to find the area of a circle having radius 'r'.
Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.

You are given the choice 'ch' and an array 'a'.

If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.
*/

double areaSwitchCase(int ch, vector<double> a) {
	double area = 0;
	
	switch(ch) {
		case 1:
			area = M_PI * a[0] * a[0];
			break;

		case 2:
			area = a[0] * a[1];
	}

	return area;
}

int main() {
    int choice;
    cin >> choice;

    vector<double> vect (2);

    if(choice == 1) {
        cin >> vect[0];
    }

    else if(choice == 2) {
        cin >> vect[0] >> vect[1];
    }

    else {
        cout << "Invalid";
    }

    double res = areaSwitchCase(choice, vect);

    cout << res << endl;

    return 0;
}

/*
Sample Input 1:
2 
3 2

Sample Input 2: 
1
3
*/

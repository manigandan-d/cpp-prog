#include <iostream>

using namespace std;

int main() {
    int a, b, choice;
    int res = 0;

    cout << "Enter the numbers: ";
    cin >> a >> b;

    cout << "1. Press 1 for addition\n2. Press 2 for subtraction\n3. Press for multiplication\n4. Press for division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: 
            res = a+b;
            break;
        
        case 2:
            res = a-b;
            break;

        case 3:
            res = a*b;
            break;

        case 4:
            res = a/b;
            break;

        default:
            cout << "Invalid" << endl;
    }

    cout << res << endl;

    return 0;
}
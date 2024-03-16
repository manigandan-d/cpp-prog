#include <iostream>

using namespace std;

int main() {
    int val = 10;

    int &refVal = val; // alternative name for val 
    // int &refVal2; // error: reference must be initialized 
    // int &refVal3 = 10; // error: initializer must be an object 

    cout << val << " " << refVal << endl;

    return 0;
}
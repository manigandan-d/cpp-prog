#include <iostream>

using namespace std;

int main() {
    const int i = 5;
    cout << i << endl;

    // const int j; // error: uninitialized const 

    const int var = 10;
    const int &refVar = var;
    cout << var << " " << refVar << endl;

    // int &ref = var; // error: non-const reference to const object 

    int a = 15;
    const int &refA = a;
    cout << a << " " << refA << endl;

    const int val = 20;
    const int *ptr = &val;
    cout << val << " " << *ptr << endl;

    return 0;
}

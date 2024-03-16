#include <iostream>

using namespace std;

int main() {
    int val = 10;

    int *ptr = &val;

    cout << *ptr << endl;

    // Null Pointers 
    int *p1 = nullptr;
    int *p2 = NULL;
    int *p3 = 0;

    return 0;
}
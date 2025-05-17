#include <iostream>

using namespace std;

// Forward declaration
class B;

class A {
    int data;

    public:
        A() : data(100) {}

        // Declare class B as a friend
        friend class B;
};

class B {
    public:
        void showData(A a) {
            // Accessing private member of class A
            cout << "Accessing private member of A: " << a.data << endl;
        }
};

int main() {
    A objA;
    B objB;
    objB.showData(objA);

    return 0;
}

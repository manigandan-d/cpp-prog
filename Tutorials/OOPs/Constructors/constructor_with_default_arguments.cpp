#include <iostream>

using namespace std;

class MyClass {
    int x, y;

public:
    // Constructor with default values for both parameters
    MyClass(int a = 10, int b = 20) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    MyClass obj1;           // Uses default values: 10, 20
    MyClass obj2(100);      // Uses 100 for x, default 20 for y
    MyClass obj3(5, 15);    // Uses 5 and 15

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}

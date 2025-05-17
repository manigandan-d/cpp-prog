#include <iostream>

using namespace std;

class Box {
    int length;
    int width;
    int height;

    public:
        // Constructor with all parameters
        Box(int l, int w, int h) : length(l), width(w), height(h) {
            cout << "Three-parameter constructor called\n";
        }

        // Delegating constructor - uses default values
        Box() : Box(1, 1, 1) {
            cout << "Default constructor (delegating) called\n";
        }

        // Delegating constructor - some values fixed
        Box(int size) : Box(size, size, size) {
            cout << "Single-parameter constructor (delegating) called\n";
        }

        void display() const {
            cout << "Length = " << length << ", Width = " << width << ", Height = " << height << endl;
        }
};

int main() {
    Box b1;        // Delegates to Box(1,1,1)
    Box b2(5);     // Delegates to Box(5,5,5)
    Box b3(2, 3, 4); // Direct call

    b1.display();
    b2.display();
    b3.display();

    return 0;
}

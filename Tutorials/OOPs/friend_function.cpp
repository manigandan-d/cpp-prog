#include <iostream>

using namespace std;

class Box {
    int length;
    int width;

    public:
        // Constructor
        Box(int l, int w) : length(l), width(w) {}

        // Declare friend function
        friend int calculateArea(Box b);
};

// Friend function definition
int calculateArea(Box b) {
    // Accessing private members
    return b.length * b.width;
}

int main() {
    Box b1(5, 3);
    cout << "Area of the box: " << calculateArea(b1) << endl;

    return 0;
}

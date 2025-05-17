#include <iostream>

using namespace std;

class Rectangle {
    int length;
    int width;

    public:
        // Default constructor
        Rectangle() {
            length = 0;
            width = 0;
            cout << "Default constructor called\n";
        }

        // Parameterized constructor with one argument
        Rectangle(int side) {
            length = width = side;
            cout << "Constructor with one parameter called\n";
        }

        // Parameterized constructor with two arguments
        Rectangle(int l, int w) {
            length = l;
            width = w;
            cout << "Constructor with two parameters called\n";
        }

        void display() {
            cout << "Length = " << length << ", Width = " << width << endl;
        }
};

int main() {
    Rectangle r1;         // Default constructor
    Rectangle r2(5);      // One-parameter constructor
    Rectangle r3(4, 6);   // Two-parameter constructor

    r1.display();
    r2.display();
    r3.display();

    return 0;
}

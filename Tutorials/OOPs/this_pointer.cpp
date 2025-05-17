#include <iostream>

using namespace std;

class Box {
    int length;
    int width;

    public:
        // Constructor with parameters same as member variable names
        Box(int length, int width) {
            this->length = length;  // Resolves ambiguity using 'this' pointer
            this->width = width;
        }

        // Method to set dimensions using method chaining
        Box& setLength(int length) {
            this->length = length;
            return *this;
        }

        Box& setWidth(int width) {
            this->width = width;
            return *this;
        }

        // Display box dimensions
        void display() const {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    Box b1(10, 20);
    b1.display();

    b1.setLength(30).setWidth(40); // Method chaining using 'this' pointer
    b1.display();

    return 0;
}

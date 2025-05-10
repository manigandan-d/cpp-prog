#include <iostream>

using namespace std;

class Sample {
    int* data;

    public:
        // Constructor
        Sample(int val) {
            data = new int(val);
            cout << "Constructor called\n";
        }

        // Shallow Copy Constructor
        Sample(const Sample& other) {
            data = other.data;  // Both objects now share same memory
            cout << "Shallow copy constructor called\n";
        }

        void show() const {
            cout << "Address: " << data << "\t" << "Value: " << *data << endl;
        }

        ~Sample() {
            cout << "Destructor called, freeing data: " << *data << endl;
            delete data;
        }
};

int main() {
    Sample s1(100);
    Sample s2 = s1; // Shallow copy

    s1.show();
    s2.show();

    return 0;
}

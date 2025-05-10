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

        // Deep Copy Constructor
        Sample(const Sample& other) {
            data = new int(*other.data);  // Allocate new memory and copy value
            cout << "Deep copy constructor called\n";
        }

        void show() const {
            cout << "Value: " << *data << endl;
        }

        ~Sample() {
            cout << "Destructor called, freeing data: " << *data << endl;
            delete data;
        }
};

int main() {
    Sample s1(200);
    Sample s2 = s1; // Deep copy ensures separate memory

    s1.show();
    s2.show();

    return 0;
}

#include <iostream>

using namespace std;

class Demo {
    public:
        // Constructor
        Demo() {
            cout << "Constructor called: Object created\n";
        }

        // Destructor
        ~Demo() {
            cout << "Destructor called: Object destroyed\n";
        }

        void display() {
            cout << "Inside display method\n";
        }
};

int main() {
    cout << "Entering main function\n";
    Demo obj; // Constructor is called here
    obj.display();
    cout << "Exiting main function\n";
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}

#include <iostream>

using namespace std;

class MyClass {
    int *data;

    public:
        // Constructor
        MyClass(int val) {
            data = new int(val);
        }

        // Move Constructor
        MyClass(MyClass &&source) {
            data = source.data;      // Steal the resource
            source.data = nullptr;   // Nullify the source to avoid double deletion
        }

        // Display function
        void display() {
            if (data)
                cout << "Data: " << *data << endl;
            else
                cout << "Data is nullptr" << endl;
        }

        // Destructor
        ~MyClass() {
            delete data;
        }
};

int main() {
    MyClass obj1(10);
    obj1.display();

    MyClass obj2 = move(obj1);  // Move constructor called
    obj2.display();

    obj1.display();  // Data is nullptr

    return 0;
}

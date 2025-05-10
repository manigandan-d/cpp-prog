#include <iostream>

using namespace std;

// Base class
class MyClass {
    public:
        int publicVar; // Accessible from anywhere

        // Constructor initializes all member variables
        MyClass() {
            publicVar = 1;
            privateVar = 2;
            protectedVar = 3;
        }

        // Member function to access private and protected members
        void showData() {
            cout << "Private Variable: " << privateVar << endl;     // Accessible inside the class
            cout << "Protected Variable: " << protectedVar << endl; // Accessible inside the class
        }

    private:
        int privateVar; // Accessible only within this class

    protected:
        int protectedVar; // Accessible within this class and derived classes
};

// Derived class
class Derived : public MyClass {
    public:
        // Function to access protected member from base class
        void accessProtected() {
            cout << "Accessing protected variable from derived class: " << protectedVar << endl;
        }
};

int main() {
    MyClass obj;
    Derived d;

    // Accessing public member directly
    cout << "Public Variable: " << obj.publicVar << endl;

    // Accessing private and protected members directly (will cause compile-time error)
    // cout << obj.privateVar << endl;   // Error
    // cout << obj.protectedVar << endl; // Error

    // Accessing private and protected members via member function
    obj.showData();

    // Accessing protected member from derived class
    d.accessProtected();

    return 0;
}

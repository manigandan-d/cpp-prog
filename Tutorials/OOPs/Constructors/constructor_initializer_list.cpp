#include <iostream> 

using namespace std; 

class Demo {
    const int a;      // const member must be initialized in initializer list
    int &b;           // reference member must also be initialized in initializer list

    public: 
        Demo(int x, int y) : a(x), b(y) {
            cout << "Constructor initializer list called" << endl; 
        }

        void display() {
            cout << "a = " << a << ", b = " << b << endl; 
        }
};

int main() {
    int num = 10;
    Demo d(5, num);   // pass variable to bind to reference
    d.display();

    return 0;
}

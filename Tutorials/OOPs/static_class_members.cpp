#include <iostream>

using namespace std;

class Counter {
    static int count; // Static data member

    public:
        // Constructor increments count
        Counter() {
            ++count;
        }

        // Static member function
        static void showCount() {
            cout << "Number of objects created: " << count << endl;
        }
};

// Definition of static data member
int Counter::count = 0;

int main() {
    Counter::showCount(); // Call before any object is created

    Counter c1, c2, c3;
    Counter::showCount(); // Call after object creation

    return 0;
}

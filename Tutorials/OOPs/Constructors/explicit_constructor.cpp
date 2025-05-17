#include <iostream>

using namespace std;

class Distance {
    int meters;

    public:
        // Explicit constructor prevents implicit conversions
        explicit Distance(int m) {
            meters = m;
            cout << "Constructor called with " << meters << " meters\n";
        }

        void display() const {
            cout << "Distance: " << meters << " meters\n";
        }
};

void showDistance(const Distance& d) {
    d.display();
}

int main() {
    Distance d1(100);   // OK: direct initialization
    showDistance(d1);   // OK

    // showDistance(50); // Error: implicit conversion blocked by 'explicit'

    showDistance(Distance(50)); // OK with explicit conversion

    return 0;
}

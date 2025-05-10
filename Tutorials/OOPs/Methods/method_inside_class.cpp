#include <iostream>

using namespace std;

class Calculator {
    public:
        // Method defined inside the class
        int add(int a, int b) {
            return a + b;
        }

        int multiply(int a, int b) {
            return a * b;
        }
};

int main() {
    Calculator calc;

    cout << "Addition: " << calc.add(5, 3) << endl;
    cout << "Multiplication: " << calc.multiply(3, 2) << endl;

    return 0;
}

#include <iostream>

using namespace std;

class Calculator {
    public:
        int add(int a, int b);       // Function declaration
        int multiply(int a, int b);  // Function declaration
};

// Method definitions outside the class using scope resolution operator
int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int main() {
    Calculator calc;
    
    cout << "Addition: " << calc.add(10, 6) << endl;
    cout << "Multiplication: " << calc.multiply(3, 7) << endl;

    return 0;
}

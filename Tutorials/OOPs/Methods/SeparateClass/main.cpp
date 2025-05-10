#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;
    
    cout << "Addition: " << calc.add(8, 2) << endl;
    cout << "Multiplication: " << calc.multiply(9, 3) << endl;

    return 0;
}

#include <iostream>

using namespace std;

class Car {
    string brand;
    int year;

    public:
        // Parameterized constructor
        Car(string b, int y) {
            brand = b;
            year = y;
            cout << "Parameterized constructor called." << endl;
        }

        void displayInfo() {
            cout << "Brand: " << brand << ", Year: " << year << endl;
        }
};

int main() {
    Car c1("Toyota", 2020);   // Calls parameterized constructor
    c1.displayInfo();

    Car c2("BMW", 2023);      // Another object with different data
    c2.displayInfo();

    return 0;
}

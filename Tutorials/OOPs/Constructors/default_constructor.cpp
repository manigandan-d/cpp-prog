#include <iostream>

using namespace std;

class Car {
    string brand;
    int year;

    public:
        // Default constructor
        Car() {
            brand = "Unknown";
            year = 0;
            cout << "Default constructor called." << endl;
        }

        void displayInfo() {
            cout << "Brand: " << brand << ", Year: " << year << endl;
        }
};

int main() {
    Car c1;           // Calls default constructor
    c1.displayInfo(); // Display default-initialized values

    return 0;
}

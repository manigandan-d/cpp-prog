#include <iostream>

using namespace std;

class Car {
    private:
        string brand;
        int year;

    public:
        // Constructor
        Car(string b, int y) {
            brand = b;
            year = y;
        }

        // Method to display car info
        void displayInfo() {
            cout << "Brand: " << brand << ", Year: " << year << endl;
        }
};

int main() {
    // Create objects
    Car car1("Toyota", 2010);
    Car car2("Ford", 2020);

    // Call methods
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}

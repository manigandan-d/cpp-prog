#include <iostream>

using namespace std;

class Car {
    public:
        string brand;
        int year;

        // Constructor
        Car(string b, int y) : brand(b), year(y) {
            cout << "Constructor called" << endl;
        }

        // Copy constructor
        Car(const Car& other) {
            brand = other.brand;
            year = other.year;
            cout << "Copy constructor called" << endl;
        }

        // Method to display data
        void display() const {
            cout << "Brand: " << brand << ", Year: " << year << endl;
        }
};

// Case 1: Passing object by value
void showCar(Car c) {
    cout << "Inside function (pass by value): ";
    c.display();
}

// Case 2: Returning object by value
Car createCar() {
    Car temp("Ford", 2022);
    return temp; // May invoke copy constructor (or be optimized)
}

int main() {
    // Case 3: Initializing one object from another
    Car car1("Tesla", 2024);    // Constructor
    car1.display();
    
    Car car2 = car1;            // Copy constructor

    // Case 1
    showCar(car2);              // Copy constructor

    // Case 2
    Car car3 = createCar();     // Copy constructor may be called
    car3.display();

    return 0;
}

#include <iostream>

using namespace std;

class MyArray {
    int* arr;
    int size;

    public:
        // Dynamic constructor
        MyArray(int s) {
            size = s;
            arr = new int[size]; // dynamic memory allocation
            cout << "Dynamic constructor called\n";
        }

        // Method to input values
        void input() {
            cout << "Enter " << size << " elements:\n";

            for (int i = 0; i < size; ++i) {
                cin >> arr[i];
            }
        }

        // Method to display values
        void display() {
            cout << "Array elements: ";

            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            
            cout << endl;
        }

        // Destructor
        ~MyArray() {
            delete[] arr;
            cout << "Destructor called and memory freed\n";
        }
};

int main() {
    MyArray obj(3); // Constructor dynamically allocates memory
    obj.input();
    obj.display();

    return 0;
}

#include <iostream>

using namespace std;

class DynamicArray {
    int* arr;
    int size;

    public:
        // Constructor: allocates memory
        DynamicArray(int s) {
            size = s;
            arr = new int[size];
            cout << "Constructor: Allocated memory for " << size << " elements\n";
        }

        // Method to assign values
        void setValues() {
            for (int i = 0; i < size; ++i) {
                arr[i] = i + 1;
            }
        }

        // Method to display values
        void display() const {
            for (int i = 0; i < size; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        // Destructor: frees memory
        ~DynamicArray() {
            delete[] arr;
            cout << "Destructor: Freed allocated memory\n";
        }
};

int main() {
    DynamicArray d(5);
    d.setValues();
    d.display();

    return 0;
}

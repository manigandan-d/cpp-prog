#include <iostream>

using namespace std;

class Item {
    private:
        const int id;         // Const data member
        string name;

    public:
        // Constructor using initializer list to initialize const member
        Item(int i, string n) : id(i), name(n) {}

        // Const member function: guarantees it won't modify class members
        void display() const {
            cout << "ID: " << id << ", Name: " << name << endl;
        }

        // Non-const member function
        void setName(const string& newName) {
            name = newName;
        }

        // Getter for ID
        int getId() const {
            return id;
        }
};

// Function accepting const reference
void printItem(const Item& item) {
    item.display(); // Can only call const methods
}

int main() {
    const Item item1(101, "Notebook");
    item1.display();         // Allowed
    // item1.setName("Pen"); // Not allowed – modifying a const object

    Item item2(102, "Pencil");
    printItem(item2);        // Passing as const reference

    return 0;
}

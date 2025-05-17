#include <iostream>

using namespace std;

// Base class
class Animal {
    public:
        void speak() {
            cout << "Animal speaks" << endl;
        }
};

// Intermediate class derived from Animal
class Dog : public Animal {
    public:
        void bark() {
            cout << "Dog barks" << endl;
        }
};

// Derived class from Dog
class Puppy : public Dog {
    public:
        void weep() {
            cout << "Puppy weeps" << endl;
        }
};

int main() {
    Puppy p;
    p.speak();   // Inherited from Animal
    p.bark();  // Inherited from Dog
    p.weep();  // Defined in Puppy

    return 0;
}

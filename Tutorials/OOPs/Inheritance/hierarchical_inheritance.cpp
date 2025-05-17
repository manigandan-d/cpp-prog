#include <iostream>

using namespace std;

// Base class
class Animal {
    public:
        void speak() {
            cout << "Animal speaks" << endl;
        }
};

// Derived class 1
class Dog : public Animal {
    public:
        void bark() {
            cout << "Dog barks" << endl;
        }
};

// Derived class 2
class Cat : public Animal {
    public:
        void meow() {
            cout << "Cat meows" << endl;
        }
};

int main() {
    Dog d;
    Cat c;

    d.speak();  // Inherited from Animal
    d.bark();

    c.speak();  // Inherited from Animal
    c.meow();

    return 0;
}

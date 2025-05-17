#include <iostream>

using namespace std;

// Base class
class Person {
    public:
        void info() {
            cout << "This is a person" << endl;
        }
};

// Intermediate classes using virtual inheritance
class Student : virtual public Person {
    public:
        void study() {
            cout << "Student studies" << endl;
        }
};

class Employee : virtual public Person {
    public:
        void work() {
            cout << "Employee works" << endl;
        }
};

// Derived class inherits from both Student and Employee
class Intern : public Student, public Employee {
    public:
        void internWork() {
            cout << "Intern does internship" << endl;
        }
};

int main() {
    Intern intern;

    intern.info();       // No ambiguity due to virtual inheritance
    intern.study();
    intern.work();
    intern.internWork();

    return 0;
}

#include <iostream>

using namespace std;

// Base class
class Person {
    public:
        void info() {
            cout << "This is a person" << endl;
        }
};

// Intermediate class 1
class Student : public Person {
    public:
        void study() {
            cout << "Student studies" << endl;
        }
};

// Intermediate class 2
class Employee : public Person {
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

    // Ambiguity: info() is inherited from both Student and Employee (which both inherit Person)
    // So we need to resolve it explicitly
    intern.Student::info();    // or intern.Employee::info();
    intern.study();
    intern.work();
    intern.internWork();

    return 0;
}

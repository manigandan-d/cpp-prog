#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>

using namespace std;

class Animal {
    string name;
    int age;

    public:
        void input() {
            name = "Dog";
            age = 5;
        }

        void output() {
            cout << name << " " << age << endl;
        }
};

#endif

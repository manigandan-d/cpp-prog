#ifndef _DOG_H_
#define _DOG_H_

#include "animal.h"

class Dog {
    Animal d;

    public:
        void dogInput() {
            d.input();
        }

        void dogOutput() {
            d.output();
        }
};

#endif 

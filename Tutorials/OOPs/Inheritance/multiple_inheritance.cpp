#include <iostream>

using namespace std;

// First base class
class Engine {
    public:
        void startEngine() {
            cout << "Engine started" << endl;
        }
};

// Second base class
class MusicSystem {
    public:
        void playMusic() {
            cout << "Playing music" << endl;
        }
};

// Derived class inherits from both Engine and MusicSystem
class Car : public Engine, public MusicSystem {
    public:
        void drive() {
            cout << "Car is moving" << endl;
        }
};

int main() {
    Car myCar;
    myCar.startEngine();  // From Engine
    myCar.playMusic();    // From MusicSystem
    myCar.drive();        // From Car

    return 0;
}

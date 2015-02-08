# include <iostream>
# include <string>
# include "string_utils.cpp"

using namespace std;

// Alternatively could define Animal3 as a "capability class" (similar to abstract)
// intended to be subclassed
class Animal3{
    public:
        // virtual keyword enables subclass to override
        virtual void makeSound() {
            cout << "The Animal says grr" << endl;
        }
};

class Dog3 : public Animal3{
    public:
        void makeSound() {
            cout << "The Dog says woof" << endl;
        }
};

class Cat : public Animal3{
    public:
        void makeSound() {
            cout << "The Cat says meow" << endl;
        }
};

// abstract data type
class Car {
    public:
        virtual int getNumWheels() = 0;
        virtual int getNumDoors() = 0;
};

class StationWagon : public Car {
    public:
        // constructor
        StationWagon() {
        }

        // destructor
        ~StationWagon();

        int getNumWheels() {
            return 4;
        }

        int getNumDoors() {
            return 4;
        }

};

int main() {

    // instantiate as pointer variables
    Animal3* dog = new Dog3;
    Animal3* cat = new Cat;

    // polymorphism example- calling the same method name on these Animal3 instances
    // calls the most specific implementation
    dog -> makeSound();
    cat -> makeSound();

    Car* stationWagon = new StationWagon();
    cout << intToString(stationWagon -> getNumWheels()) << endl;

    return 0;
}


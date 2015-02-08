# include <iostream>
# include <string>

using namespace std;

class Animal2{
    public:
        void getFamily() {
            cout << "We are animals" << endl;
        }

        // virtual keyword enables subclass to override
        virtual void getClass() {
            cout << "I'm an Animal" << endl;
        }
};

class Dog2 : public Animal2{
    public:
        void getClass() {
            cout << "I'm a Dog" << endl;
        }
};

class GermanShepard : public Dog2{
    public:
        void getClass() {
            cout << "I'm a German Shepard" << endl;
        }

        void getDerived() {
            cout << "I'm an Animal and Dog" << endl;
        }
};

void whatClassAreYou(Animal2 *animal) {
    animal -> getClass();
}

int main() {

    // instantiate as pointer variables
    Animal2 *animal = new Animal2;
    Dog2 *dog = new Dog2;

    // pointer can't use dot syntax
    // animal.getClass();
    animal -> getClass();
    dog -> getClass();

    whatClassAreYou(dog);

    Dog2 spot;
    GermanShepard max;

    Animal2* dog2Ptr = &spot;
    Animal2* germanShepardPtr = &max;

    dog2Ptr -> getFamily();
    germanShepardPtr -> getFamily();

    // polymorphism example- calling the same method name on these Animal2 instances
    // calls the most specific implementation
    dog2Ptr -> getClass();
    germanShepardPtr -> getClass();

    return 0;
}


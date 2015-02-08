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

    return 0;
}


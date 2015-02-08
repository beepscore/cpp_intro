# include "animal.cpp"

using namespace std;

class Dog : public Animal {

    private:
        string sound;

    public:
        string getSound() {
            return sound;
        }

    Dog(int, int, string, string);

    // default constructor will use superclass default constructor
    Dog() : Animal() {};

    string toString();
};

Dog::Dog(int height, int weight, string name, string bark) : Animal(height, weight, name) {
    this -> sound = bark;
}

string Dog::toString(){
    return this -> getName() + " is " +
        intToString(this -> getHeight()) + " cms tall and " +
        intToString(this -> getWeight()) + " kg in weight and says " +
        this -> sound;
}

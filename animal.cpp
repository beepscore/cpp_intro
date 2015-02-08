# include <iostream>
# include <string>
# include "string_utils.cpp"

using namespace std;

// Classes

class Animal {

    // static keyword denotes a class variable
    static int numOfAnimals;

    private:
    int height;
    int weight;
    string name;

    public:

    int getHeight(){
        return height;
    }

    void setHeight(int cm){
        height = cm;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int kg){
        weight = kg;
    }

    string getName(){
        return name;
    }

    void setName(string a_name){
        name = a_name;
    }

    // function prototypes

    // constructors
    // overload method name with multiple possible argument signatures
    Animal(int, int, string);
    Animal();

    // destructor
    ~Animal();

    string toString();

    static int getNumOfAnimals() {
        return numOfAnimals;
    }

};

int Animal::numOfAnimals = 0;

Animal::Animal(int height, int weight, string name) {
    // this refers to instance
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::numOfAnimals++;
}

Animal::Animal() {
    Animal::numOfAnimals++;
}

Animal::~Animal() {
    cout << "Animal " << this -> name << " destroyed" << endl;
}

string Animal::toString() {
    return this -> name + " is " +
        intToString(this -> height) + " cms tall and " +
        intToString(this -> weight) + " kg in weight";
}

int main() {

    Animal fred;
    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");

    cout << fred.getName() << " is " << intToString(fred.getHeight()) <<
        " cms tall and " << intToString(fred.getWeight()) << "kgs in weight" << endl;

    Animal tom(36, 15, "Tom");
    cout << tom.toString() << endl;

    return 0;
}


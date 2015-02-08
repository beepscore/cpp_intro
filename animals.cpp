# include <iostream>
# include <string>
//# include "animal.cpp"
# include "dog.cpp"
//# include "string_utils.cpp"

using namespace std;

int main() {

    Animal fred;
    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");

    cout << fred.getName() << " is " << intToString(fred.getHeight()) <<
        " cms tall and " << intToString(fred.getWeight()) << "kgs in weight" << endl;

    Animal tom(36, 15, "Tom");
    cout << tom.toString() << endl;

    Dog spot(38, 16, "Spot", "Woof");
    cout << spot.getSound() << endl;
    cout << spot.toString() << endl;
    cout << spot.Animal::toString() << endl;

    cout << "Number of animals " << Animal::getNumOfAnimals() << endl;

    return 0;
}


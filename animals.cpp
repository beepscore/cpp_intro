# include <iostream>
# include <string>
# include "animal.cpp"
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

    return 0;
}


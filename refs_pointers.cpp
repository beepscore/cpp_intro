# include <iostream>
# include <sstream>
# include <string>

// references vs pointers
// C uses pointers.
// C++ has references. Prefer to pointers, they are safer.
// Sometimes need to use pointers for additional power.

// https://en.wikipedia.org/wiki/Reference_%28C%2B%2B%29
// http://stackoverflow.com/questions/7058339/c-when-to-use-references-vs-pointers
// http://www.thegeekstuff.com/2013/05/cpp-reference-variable/

using namespace std;

string intToString(int an_int) {
    // convert int to string
    stringstream ss;
    ss << an_int;
    return ss.str();
}

void useRefs() {
    cout << "useRefs()" << endl;

    int myNum;
    // reference variable must be initialized when declared
    // e.g. this won't work
    //int& myNumRef
    int& myNumRef = myNum;

    myNum = 6;
    cout << "myNum == " + intToString(myNum) << endl;
    cout << "myNumRef == " + intToString(myNumRef) << endl;

    myNumRef = 17;
    cout << "myNum == " + intToString(myNum) << endl;
    cout << "myNumRef == " + intToString(myNumRef) << endl;
}

void usePointers() {
    cout << "usePointers()" << endl;
    // you can declare a pointer without setting a value, then set value later
    int myNum;
    myNum = 6;
    cout << "myNum == " << myNum << endl;
    cout << "myNum == " + intToString(myNum) << endl;

    int* myNumPtr = &myNum;
    *myNumPtr = 17;
    cout << "myNumPtr address == " << myNumPtr  << endl;
    cout << "myNumPtr value == " << *myNumPtr << endl;

    int myArray[5] = {4, 13, 14, 24, 34};
    int* myArrayPtr = myArray;
    cout << "myArrayPtr address == " << myArrayPtr << endl;
    cout << "myArrayPtr value == " << *myArrayPtr << endl;

    cout << "myArray[1] address == " << &myArray[1] << endl;
    cout << "++myArrayPtr address == " << ++myArrayPtr << endl;
}

int main() {
    useRefs();
    usePointers();

    return 0;
}


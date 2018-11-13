# include <iostream>
# include <sstream>
# include <string>
# include "string_utils.cpp"

// references vs pointers
// C uses pointers.
// C++ has references. Prefer to pointers, they are safer.
// reference is guaranteed to be nonzero.
// Sometimes need to use pointers for additional power.

// https://en.wikipedia.org/wiki/Reference_%28C%2B%2B%29
// http://stackoverflow.com/questions/7058339/c-when-to-use-references-vs-pointers
// http://www.thegeekstuff.com/2013/05/cpp-reference-variable/
// http://stackoverflow.com/questions/728233/why-are-references-not-reseatable-in-c%E2%80%8C%E2%80%8B

using namespace std;

void describePointerArgument(int* ptrArg) {
    cout << "describePointerArgument()" << endl;
    cout << "*ptrArg == " + intToString(*ptrArg) << endl;
}

void describeReferenceArgument(int& refArg) {
    cout << "describeReferenceArgument()" << endl;
    cout << "refArg == " + intToString(refArg) << endl;
}

void usePointers() {
    cout << "usePointers()" << endl;
    // you can declare a variable without setting a value, then set value later
    int myNum;
    myNum = 6;
    cout << "myNum == " << myNum << endl;
    cout << "myNum == " + intToString(myNum) << endl;

    // &myNum, the address of myNum
    cout << "&myNum == " << &myNum  << endl;

    // myNumPtr contains &myNum, the address of myNum
    int* myNumPtr = &myNum;
    cout << "myNumPtr == " << myNumPtr  << endl;

    // dereference pointer
    *myNumPtr = 17;
    cout << "*myNumPtr == " << *myNumPtr << endl;
    cout << "myNum == " << myNum << endl;

    int myArray[5] = {4, 13, 14, 24, 34};
    int* myArrayPtr = myArray;
    cout << "myArrayPtr address == " << myArrayPtr << endl;
    cout << "myArrayPtr value == " << *myArrayPtr << endl;

    cout << "myArray[1] address == " << &myArray[1] << endl;
    cout << "++myArrayPtr address == " << ++myArrayPtr << endl;

    describePointerArgument(myNumPtr);
}

void useRefs() {
    cout << "useRefs()" << endl;

    int myNum;
    // reference variable must be initialized when declared
    // e.g. this won't work
    //int& myNumRef;
    int& myNumRef = myNum;

    myNum = 6;
    cout << "myNum == " + intToString(myNum) << endl;
    cout << "myNumRef == " + intToString(myNumRef) << endl;

    myNumRef = 17;
    cout << "myNum == " + intToString(myNum) << endl;
    cout << "myNumRef == " + intToString(myNumRef) << endl;

    describeReferenceArgument(myNumRef);
}

int main() {
    useRefs();
    usePointers();

    return 0;
}


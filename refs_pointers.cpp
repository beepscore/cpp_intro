# include <iostream>
# include <sstream>
# include <string>

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
    int myNum = 6;
    int& myNumRef = myNum;
    myNumRef = 17;

    cout << "myNum == " + intToString(myNum) << endl;
}

void usePointers() {
    int myNum = 6;
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


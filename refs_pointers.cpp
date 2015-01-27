# include <iostream>
# include <sstream>
# include <string>

// https://en.wikipedia.org/wiki/Reference_%28C%2B%2B%29
// http://stackoverflow.com/questions/7058339/c-when-to-use-references-vs-pointers
// http://www.thegeekstuff.com/2013/05/cpp-reference-variable/

using namespace std;

void useRefs() {
    int myNum = 6;
    int& myNumRef = myNum;
    myNumRef = 17;
    string message = "myNum == ";

    // convert int to string
    stringstream ss;
    ss << myNum;
    string myNumStr = ss.str();
    cout << "myNum == " + myNumStr << endl;
}

void usePointers() {
}

int main() {
    useRefs();
    usePointers();

    return 0;
}


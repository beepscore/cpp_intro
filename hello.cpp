# include <iostream>
using namespace std;

int main() {
    // Output a message.
    cout << "Hello, welcome to C++" << endl;

    const double PI = 3.1415926536;

    char myGrade = 'A';

    // char size is 1 byte
    cout << "Size of char " << sizeof(myGrade) << endl;

    int myAge = 39;
    // int size is 4 bytes
    cout << "Size of int " << sizeof(myAge) << endl;

    float favNum = 3.141592;

    return 0;
}


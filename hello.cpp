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


    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    if ((age >= 1) && (age < 16)) {
        cout << "You can't drive" << endl;
    } else if (!isNotIntoxicated) {
        cout << "You can't drive" << endl;
    } else {
        cout << "You can drive" << endl;
    }

        string numberGuessed;
        int intNumberGuessed;

    do {
        cout << "Guess between 1 and 10: ";
        getline(cin, numberGuessed);
        intNumberGuessed = stoi(numberGuessed);
    } while (intNumberGuessed != 4);

        cout << "You win!" << endl;
    return 0;
}


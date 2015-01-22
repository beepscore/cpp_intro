# include <iostream>
# include <string>
# include <vector>

using namespace std;

void useVariables() {
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
}

void driving() {
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
}

void guessNumber() {
        string numberGuessed;
        int intNumberGuessed;

    do {
        cout << "Guess between 1 and 10: ";
        getline(cin, numberGuessed);
        intNumberGuessed = stoi(numberGuessed);
    } while (intNumberGuessed != 4);

        cout << "You win!" << endl;
}

void happyBirthday() {
    // c uses array of char to make a string
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

    // c++ has string object
    string birthdayString = " Birthday";

    cout << happyArray + birthdayString << endl;
}

void lottery() {
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};
    // vector. similar to array, but can change the length
    vector <int> lotteryNumVect(10);
    // insert first three elements of array into vector
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray,
            lotteryNumArray+3);

    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);
    cout << lotteryNumVect.at(2) << endl;
}

int addNumbers(int firstNum, int secondNum = 0) {
    return firstNum + secondNum;
}

// can overload function same name different arguments
int addNumbers(int firstNum, int secondNum, int thirdNum) {
    return firstNum + secondNum + thirdNum;
}

int main() {
    useVariables();
    driving();
    guessNumber();
    happyBirthday();
    lottery();

    cout << addNumbers(2, 3) << endl;
    cout << addNumbers(2, 3, 7) << endl;

    return 0;
}


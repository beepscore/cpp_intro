# include <iostream>
# include <string>
# include <vector>
# include <fstream>
# include <cmath>

using namespace std;

void useVariables() {
    // Output a message.
    // character output, display a stream of characters
    cout << "Hello, welcome to C++" << endl;

    // example define a constant
    const double PI = 3.1415926536;
    cout << "PI " << PI << endl;
    // Note cmath already defines M_PI
    cout << "M_PI " << M_PI << endl;

    // In c++ char delimiter is ', string delimiter is "
    char myGrade = 'A';

    // char size is 1 byte
    cout << "Size of char " << sizeof(myGrade) << endl;

    int myAge = 39;
    // int size is 4 bytes
    cout << "Size of int " << sizeof(myAge) << endl;

    cout << "INT_MAX " << INT_MAX << endl;

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
        int numberGuessedInt;

    do {
        cout << "Guess between 1 and 10: ";
        getline(cin, numberGuessed);
        // stoi string to int
        // stod string to double
        numberGuessedInt = stoi(numberGuessed);
    } while (numberGuessedInt != 4);

        cout << "You win!" << endl;
}

void happyBirthday() {
    // c uses array of char to make a string
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    cout << "typeid(happyArray) " << typeid(happyArray).name() << endl;
    // typeid(happyArray) A6_c
    // i.e. array of char, length 6

    // c++ has string object
    string birthdayString = " Birthday";
    cout << "typeid(birthdayString) " << typeid(birthdayString).name() << endl;
    // typeid(birthdayString) NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE

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

// recursive
int getFactorial(int number) {
    int factorial = 0;

    if (number == 1) {
        factorial = 1;
    } else {
        factorial = number * getFactorial(number - 1);
    }
    return factorial;
}

int writeAFile() {
    string steveQuote = "A day without sunshine is like, you know, night";
    ofstream writer("stevequote.txt");
    if (!writer) {
        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer << steveQuote << endl;
        writer.close();
    }
    return 0;
}

int appendToFile() {
    // append
    ofstream writer("stevequote.txt", ios::app);
    if (!writer) {
        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer << "\n - Steve Martin" << endl;
        writer.close();
    }
    return 0;
}

int readAFile() {
    ifstream reader("stevequote.txt");
    char letter;
    if (!reader) {
        cout << "Error reading file" << endl;
        return -1;
    } else {
        for (int i = 0; !reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
        cout << endl;
        reader.close();
    }
    return 0;
}

int main() {
    useVariables();
    driving();
    // guessNumber();
    happyBirthday();
    lottery();

    cout << addNumbers(2, 3) << endl;
    cout << addNumbers(2, 3, 7) << endl;

    cout << getFactorial(7) << endl;

    writeAFile();
    appendToFile();
    readAFile();

    return 0;
}


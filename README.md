# Purpose
Record info about C++.

# References
C++ programming
Derek Banas
https://www.youtube.com/watch?v=Rub-JsjMhWY

Magpi (Raspberry Pi)
<http://www.themagpi.com/issue/issue-7/article/welcome-to-the-c-cache/>
<http://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html>

https://isocpp.org/wiki/faq/newbie

Learning C++ if you already know Objective-C
https://isocpp.org/wiki/faq/objective-c

# Results

## compile
To compile C use gcc.

To compile C++ use g++.
Works on OS X, linux or windows.

    g++ -o hello hello.cpp

Compiles and links an executable file named hello.

## run
To run from this directory

    ./hello

### alternatively
this isn't quite right throws error
    g++ -std=c++11 hello.cpp
    ./a.out

## C++ vs C
C++ is object oriented.
Has string class.

### int to string
sprintf() C function is available in C++, but in general when working in C++ prefer to use it.
No standard C++ function converts int to string.
Can write a function to do this.
sstream is a very compiler-portable way to convert int to string.


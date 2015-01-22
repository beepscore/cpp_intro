# Purpose
Record info about compiling and running C++.

# References
C++ programming
Derek Banas
https://www.youtube.com/watch?v=Rub-JsjMhWY

Magpi (Raspberry Pi)
<http://www.themagpi.com/issue/issue-7/article/welcome-to-the-c-cache/>
<http://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html>

# Results

## compile
To compile C use gcc.

To compile C++ use g++.
Works on OS X, linux or windows.

    g++ -o hello hello.cpp

Compiles and links an executable file named hello.

To run from this directory

    ./hello

### alternatively
this isn't quite right throws error
    g++ -std=c++11 hello.cpp
    ./a.out



#include <iostream>
#include <string>

/*
in python, we use lists
in C++, we use actual arrays
the difference is that arrays have fixed sizes and contain one datatype inside them
the idea for an array is to create a "constant variable", this is one that cannot change at all during the program
*/

const int size = 5;
// the word "const" just says "constant", you still need the datatype specified

int scores[size] = {56, 76, 24, 56, 34}; // since arrays cannot be changed, you must populate the data in at the start

// to access an array at a specific position it is identical to python
int main() {
    std::cout << scores[0]; // access the first item in array
    std::cout << scores[2]; // access the third item in array

}
#include <iostream>
#include <string>

/*
unlike in python, you cannot run code in global space
you can initialise and create data structures and variables in global, but not run anything
*/ 

// like a variable, return type must be specified
int main() { 
    int age = 18;
}

/*
the main function always returns an integer
its not written there, but the main function always has a "return 0" if worked "return 1" if failed
in C++, you can define plenty of functions but C++ doesnt know where to start since you cant run code in global space
so it hunts down where "main()" is located and starts there
*/
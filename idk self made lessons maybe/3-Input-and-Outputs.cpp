#include <iostream>
#include <string>

// this one has two ways to do it, both almost identical, but one is bad programming practice and the other is good programming practice

// for testing, comment out one of the main functions as you cant have two main() functions in the same file, just us /* ... */ to comment multiple lines

// METHOD 1


int main() { // define your standard main function
    string name; // define string variable
    std::cout << "What is your name? > "; // this is an output. the "<<" is how you tell the code send to screen
    std::cin >> name; // this is an input, the ">>" are the opposite direction from the outputs to say that its coming in from the screen
    std::cout << "My name is " << name; // this is an output showing how you do string concatenation
}


// METHOD 2 - generally, avoid this one


using namespace std;

int main() { // define your standard main function
    string name; // define string variable
    cout << "What is your name? > "; // this is an output. the "<<" is how you tell the code send to screen
    cin >> name; // this is an input, the ">>" are the opposite direction from the outputs to say that its coming in from the screen
    cout << "My name is " << name; // this is an output showing how you do string concatenation
}

/*
the problem with namespace std is that it contains many many variables and functions which are very good for using common words
words like "distance" and "time" are initialised inside std, so if you try to create a variable of the same name your code will not run
since C++ is a compiler, not an interpreter, it runs the entire code at once when you press run
that means it doesnt see any errors until it gets to that bit in the code and then it spits out an error and continues going
*/
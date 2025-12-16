#include <iostream>
#include <string>

/*
this program demonstrates two very common beginner issues in c++:

1 output appearing on the same line
2 user input being skipped due to the input buffer

both problems are caused by newlines ('\n') and how c++ handles them
*/

/*
function prototype
c++ must know that main2 exists before main() tries to call it
this is required because c++ is compiled and read top to bottom
this will be properly explained later when functions are explained
*/
void main2();

int main() {

    /*
    cout does NOT automatically move to a new line
    it prints exactly what you tell it to print
    */

    std::cout << "hello!" << std::endl; // endl prints a newline, its faster to run the program using \n, but since C++ is already really fast and this is a small program we can get away with endl instead
    std::cout << "world!\n";             // \n also prints a newline

    /*
    calling the next function for the next part
    */
    main2();
}

/*
this function demonstrates the difference between:
- cin >>
- getline()

and explains why cin.ignore() is needed when mixing them
*/
void main2() {

    /*
    cin >> only reads input up to the first space
    this means it cannot read full names properly
    */

    std::string name;
    std::cout << "what is your full name? ";
    std::cin >> name;

    /*
    if the user types: "alex smith"
    only "alex" is stored
    everything after the space is ignored
    */
    std::cout << "cin read: " << name << std::endl;

    /*
    when the user pressed enter, a newline character '\n'
    was added to the input buffer

    cin >> stops reading before the newline,
    so the '\n' is still sitting there
    */

    std::string fullname;
    std::cout << "what is your full name? ";

    /*
    cin.ignore() removes the leftover '\n' from the buffer
    without this line, getline would read that newline immediately
    and return an empty string
    */
    std::cin.ignore();

    /*
    getline reads the entire line, including spaces,
    and stops when it reaches a newline
    */
    std::getline(std::cin, fullname);

    std::cout << "getline read: " << fullname << std::endl;
    /*
    this code wont run as intended as since the "cin >>" didnt collect everything on the input line, everything leftover got pushed to the next input line
    */
}

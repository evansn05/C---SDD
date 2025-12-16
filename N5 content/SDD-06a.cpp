#include <iostream>

/*
Ask the user their name, then ask them how many times they would like their name to be displayed on the screen. 
The user will then type in a number, the loop will run that many times and display the user’s name each time the loop completes. 
*/

int main() {
    std::string name;
    int iterations;

    std::cout << "What is your name? > ";
    std::cin >> name;

    std::cout << "How many times should your name be displayed? > ";
    std::cin >> iterations;

    for (int i = 0; i < iterations; i++) {
        std::cout << name << std::endl;
    }
}
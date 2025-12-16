#include <iostream>

/*
Write a program that asks the user for a password. 
An error message must be displayed if the wrong password is entered. 
The program should display “Your password was successful” if the correct password is entered. 
All passwords will be case sensitive. 
The program should repeat until the correct password has been entered. 
*/

int main() {
    std::string password;

    do {
        std::cout << "Enter the password > ";
        std::cin >> password;

        if (password != "EpFzYBPph7pZ") {
            std::cout << "Incorrect password" << std::endl;
        }

    } while (password != "EpFzYBPph7pZ");

    std::cout << "Your password was successful" << std::endl;
}
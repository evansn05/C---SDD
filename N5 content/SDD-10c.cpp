#include <iostream>

/*
Write a program that will ask the user for three different passwords. 
If all 3 passwords are correct (store the passwords in the code), then they should be granted access to the system. 
*/

int main() {
    std::string password1;
    std::string password2;
    std::string password3;

    std::cout << "What is password 1 > ";
    std::cin >> password1;

    std::cout << "What is password 2 > ";
    std::cin >> password2;

    std::cout << "What is password 3 > ";
    std::cin >> password3;

    if (password1 == "Test1" && password2 == "Test2" && password3 == "Test3") {
        std::cout << "Welcome user";
    } else {
        std::cout << "Incorrect password(s) entered";
    }
}
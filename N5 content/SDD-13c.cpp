#include <iostream>

/*
Write a program that will ask the user their name and which year of High School they are currently in. 
The program should only accept the following answers (1st, 2nd, 3rd, 4th, 5th, and 6th).  
*/

int main() {
    std::string name;
    int year;

    std::cout << "What is your name > ";
    std::cin >> name;
    
    do {
        std::cout << "What yeargroup are you in > ";
        std::cin >> year;
        if (year != 1 && year != 2 && year != 3 && year != 4 && year != 5 && year != 6) {
            std::cout << "Invalid year entered" << std::endl;
        }
    } while (year != 1 && year != 2 && year != 3 && year != 4 && year != 5 && year != 6);
}
#include <iostream>

/*
Write a program that will ask the user their name and age. 
Validate age to make sure that age is not below zero or age is greater than 120.
*/

int main() {
    int age;

    std::cout << "What is your age? > ";
    std::cin >> age;

    while (age < 0 || age > 120) {
        std::cout << "Invalid age input" << std::endl;
        std::cout << "What is your age? > ";
        std::cin >> age;
    }
}
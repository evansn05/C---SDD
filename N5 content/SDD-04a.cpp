#include <iostream>

/*
Create a program that will ask the user their age and then, using an IF statement, 
tell them if they are old enough to drive a car. 
*/

int age;

int main() {
    std::cout << "What is your age? > ";
    std::cin >> age;

    if (age >= 17) {
        std::cout << "You are old enough to drive.";
    } else {
        std::cout << "You are not old enough to drive";
    }
        
}
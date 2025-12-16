#include <iostream>

/*
Write a program that will ask the user for a pupil’s name and age. 
If the pupil is between the ages of 4 and 11 the program should then tell the user that they should be in Primary school. 
If the pupil is between the ages of 12 and 17 then the program should tell the user that they should be in Secondary School.  
*/

int main() {
    std::string name;
    int age;

    std::cout << "What is the pupil's name? > ";
    std::cin >> name;

    std::cout << "What is the pupil's age? > ";
    std::cin >> age; 

    if (age >= 4 && age <= 11) {
        std::cout << name << " should be in Primary school";
    } else if (age >= 12 && age <= 17) {
        std::cout << name << " should be in Secondary School";
    }
}
#include <iostream>

/*
Create a quiz program where the user will not be able to move onto the next question until they have the present question correct. 
*/

int main() {
    std::string answer;

    std::cout << "What is the capital of France? > ";
    std::cin >> answer;

    while (answer != "Paris") {
        std::cout << "Incorrect!" << std::endl;
        std::cout << "What is the capital of France? > ";
        std::cin >> answer;
    }

    std::cout << "What elements are in Water? > ";
    std::cin >> answer;

    while (answer != "H20") {
        std::cout << "Incorrect!" << std::endl;
        std::cout << "What elements are in Water? > ";
        std::cin >> answer;
    }
}
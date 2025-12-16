#include <iostream>

/*
Ask the user “What is the capital of France?” If the input equal “Paris” then display the word “Correct” on the screen.  
*/

int main() {
    std::string capital;

    std::cout << "What is the capital of France? > ";
    std::cin >> capital;

    if (capital == "Paris") {
        std::cout << "You are correct!" << std::endl;
    } else {
        std::cout << "You are incorrect!" << std::endl;
    }
}

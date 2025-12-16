#include <iostream>

/*
Create a quiz program with a grading system. 
This will display a different message, depending on what score they received, 
similar to the grading program you have just completed. 
*/

int main() {
    std::string answer;
    int score;

    std::cout << "What is the capital of France? > ";
    std::cin >> answer;

    while (answer != "Paris") {
        std::cout << "Incorrect!" << std::endl;
        std::cout << "What is the capital of France? > ";
        std::cin >> answer;
    }

    score += 1;

    std::cout << "What elements are in Water? > ";
    std::cin >> answer;

    while (answer != "H20") {
        std::cout << "Incorrect!" << std::endl;
        std::cout << "What elements are in Water? > ";
        std::cin >> answer;
    }

    score += 1;

    if (score = 2) {
        std::cout << "You got full marks!";
    } else if (score = 1) {
        std::cout << "You got half marks!";
    } else {
        std::cout << "You got no marks";
    }
}
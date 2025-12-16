#include <iostream>
#include <algorithm>

/*
Create a quiz program (1 question will do) and make it so the user input is not case sensitive. 
*/

int main() {
    std::string answer;

    std::cout << "What is the capital of France? > ";
    std::cin >> answer;

    std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "paris") {
        std::cout << "You are correct!";
    } else{
        std::cout << "You are incorrect!";
    }
}
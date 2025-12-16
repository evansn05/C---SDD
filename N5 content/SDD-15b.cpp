#include <iostream>
#include <cmath>
#include <ctime>

/*
Copy the code from your “Guess the number game” (SDD 07b) and get the program to generate a random number that the user then has to guess.  
*/

int main() {
    std::srand(std::time(NULL));
    int number = std::rand() % 101;
    int guess;

    while (guess != number) {
        std::cout << "What is your guess? > ";
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Guess lower!" << std::endl;
        } else if (guess < number) {
            std::cout << "Guess higher!" << std::endl;
        } else {
            std::cout << "Congratulations! You guess the number!" << std::endl;
        }
    }
}
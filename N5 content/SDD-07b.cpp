#include <iostream>

/*
Write a program where the user has to guess a number that has been defined within the code. 
If the user guesses too high, the program should suggest they should guess lower. 
If the user guesses too low, the program should suggest they should guess higher. 
The program should display a congratulations message when the user guesses the correct number. 
*/

int main() {
    int number = 17;
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
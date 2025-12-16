#include <iostream>

/*
Create a program that will ask the user what percentage they received in a recent exam. 
Your program will then tell the user which band their mark falls under. 

    Greater than or equal to 90 they get a A  

    Greater than or equal to 70 they get a B  

    Greater than or equal to 50 they get a C  

    Greater than or equal to 40 they get a D  

    Less than 40 they Fail 
*/

int main() {
    int score;

    std::cout << "What is your score > ";
    std::cin >> score;

    if (score >= 90) {
        std::cout << "You got an A!";
    } else if (score >= 70) {
        std::cout << "You got a B!";
    } else if (score >= 50) {
        std::cout << "You got a C!";
    } else if (score >= 40) {
        std::cout << "You got a D!";
    } else {
        std::cout << "You failed";
    }
}
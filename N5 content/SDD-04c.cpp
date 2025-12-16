#include <iostream>

/*
Ask the user what their test score was out of 70. 
The program should then calculate the percentage and then if the percentage is greater than 70% then the program should tell them they have passed.  
*/

int main() {
    int score;
    std::cout << "What was your score? > ";
    std::cin >> score;

    double percentage = (score/70)*100;

    if (percentage > 70) {
        std::cout << "You have passed!";
    } else {
        std::cout << "You have failed!";
    }
}
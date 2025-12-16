#include <iostream>

/*
Ask the user to enter the individual scores for two tests. 
Both tests should be out of 100. If the user receives at least 60 % in test 1 or over 50% in test 2, 
then the program should inform the user that they have passed. 
*/

int main() {
    int score1;
    int score2;

    std::cout << "What is the score for test 1 > ";
    std::cin >> score1;

    std::cout << "What is the score for test 2 > ";
    std::cin >> score2;

    if (score1 >= 60 || score2 > 50) {
        std::cout << "You have passed!";
    } else {
        std::cout << "You have failed!";
    }
}
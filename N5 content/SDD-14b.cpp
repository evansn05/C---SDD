#include <iostream>

/*
Create another quiz program, although this time, all the questions and answers are stored in 2 separate arrays. 
The program should then use a loop to ask each question from the array and check the answers. 
The program should keep a score and display that score to the user at the end of the program. 
*/

int main() {
    int score = 0;
    std::string questions[2] = {
        "What is the capital of France?",
        "What elements are in Water?"
    };
    std::string answers[2] = {
        "Paris",
        "H2O"
    };
    std::string answer;

    for (int i=0; i<2; i++) {
        std::cout << questions[i] << " > ";
        std::cin >> answer;
        if (answer == answers[i]) {
            score += 1;
        }
    }
    std::cout << "You got a score of " << score;
}
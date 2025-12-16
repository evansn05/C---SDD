#include <iostream>

/*
Using modular code, write a program which will ask at least 5 questions. 
The questions and answers should be stored in an array. 
The code to ask the question and check the answer should be written in a function. 
*/

bool checkAnswer(std::string answer, std::string answers[], int i) {
    return answer == answers[i];
}

void askQuestions(std::string questions[], std::string answers[], int size) {
    int score = 0;
    std::string answer;

    for (int i = 0; i < size; i++) {
        std::cout << questions[i];
        std::cin >> answer;
        if (checkAnswer(answer, answers, i)) {
            score += 1;
        }
    }

    std::cout << "You scored " << score << " out of " << size << std::endl;
}

int main() {
    std::string questions[2] = {
        "What is the capital of France? > ", // just pretend i put five 
        "What are the elements in water? > "
    };
    std::string answers[2] = {
        "Paris",
        "H2O"
    };

    askQuestions(questions, answers, 2);
}
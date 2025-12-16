#include <iostream>

/*
A class has 5 students, 
the program must take in 5 names (stored in an array) and then take in 5 test scores (also stored in an array). 
The test is out of 150 and all scores should be validated. 
The pass mark is 70%. 
The program should then display a list of who has passed and who has failed.
*/

int main() {
    std::string names[5] = {};
    int scores[5] = {};

    for (int i=0; i<5; i++) {
        std::cout << "What is your name? > ";
        std::cin >> names[i];

        std::cout << "What is your score? > ";
        std::cin >> scores[i];
        while (scores[i] < 0 || scores[i] > 150) {
            std::cout << "Invalid score entered" << std::endl;
            std::cout << "What is your score? > ";
            std::cin >> scores[i];
        }
    }

    for (int i=0; i<5; i++) {
        if (((scores[i]/150.0)*100) > 70) {
            std::cout << names[i] << " has passed!" << std::endl;
        } else {
            std::cout << names[i] << " has failed" << std::endl;
        }
    }

}
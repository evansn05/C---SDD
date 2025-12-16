#include <iostream>

/*
Write a program that will ask a pupil what test marks they received for the Maths, English and Computing exams. 
The program should then calculate the average score over the 3 tests. 
*/

double score1;
double score2;
double score3;
double averageScore;

int main() {
    std::cout << "Enter maths score > "; 
    std::cin >> score1;

    std::cout << "Enter computing score > ";
    std::cin >> score2;

    std::cout << "Enter english score > ";
    std::cin >> score3;

    averageScore = (score1 + score2 + score3)/3;
    std::cout << "The average score is " << averageScore;
}
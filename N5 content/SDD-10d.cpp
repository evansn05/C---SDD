#include <iostream>

/*
Write a program that will ask the user if they take English, Drama and Music. 
If they take 2 out of the 3 subjects, then they are eligible to attend the London trip.  
*/

int main() {
    std::string english;
    std::string drama;
    std::string music;
    
    std::cout << "Do you take English? (yes/no) > ";
    std::cin >> english;

    std::cout << "Do you take Drama? (yes/no) > ";
    std::cin >> drama;

    std::cout << "Do you take Music? (yes/no) > ";
    std::cin >> music;

    if ((english == "yes" && drama == "yes") || (music == "yes" && english == "yes") || (drama == "yes" && music == "yes")) {
        std::cout << "You can go on the London trip";
    } else {
        std::cout << "You cannot go on the London trip";
    }
}
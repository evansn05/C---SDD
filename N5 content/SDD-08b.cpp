#include <iostream>

/*
Ask how many people were out for dinner. Ask how much each person’s dinner was. 
Calculate the total and then add 10% to include a tip. Display the final result onto the screen.
*/

int main() {
    int people;
    double price;
    double total = 0;
    double tip = 0.1;

    std::cout << "How many people were out for dinner? > ";
    std::cin >> people;

    for (int i=0; i<people; i++) {
        std::cout << "What was the cost of person " << i+1 << " > ";
        std::cin >> price;

        total += price;
    }
    total += total * tip;

    std::cout << "The total cost is £" << total;
}
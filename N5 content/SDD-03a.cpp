#include <iostream>

/*
Identify the inputs, process(s) and outputs for a program that will ask the user to enter the price of an apple and then the number of apples that are being purchased. 
The program should then display the total onto the screen.
*/

double price;
int number;

int main() {
    std::cout << "What is the price of an apple > "; // input
    std::cin >> price;

    std::cout << "How many apples are being purchased > "; // input
    std::cin >> number;

    double totalCost = price * number; // process
    std::cout << "Total cost: £" << totalCost; // output
}
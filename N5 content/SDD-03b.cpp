#include <iostream>

/*
Identify the inputs, process(s) and outputs for a program that will ask the user how many people were having a meal, and the total price of the meal. 
The program will then add 10% onto the meal bill to cover the tip and calculate how much each person at the table has to pay.  
*/

int people;
double totalPrice;
double tipPercent = 0.1;

int main() {
    std::cout << "How many people were having a meal? > "; // input
    std::cin >> people;

    std::cout << "What was the total cost of the meal> ? "; // input
    std::cin >> totalPrice;

    double tip = totalPrice * tipPercent; // process
    double pricePerPerson = (tip + totalPrice) / people; // process

    std::cout << "Each person has to pay £" << pricePerPerson; // output
}
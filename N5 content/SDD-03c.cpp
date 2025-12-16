#include <iostream>

/*
Identify the inputs, process(s) and outputs for a program that will ask the user how much money they would like to borrow from the bank. 
The program should then ask the user to enter how many months they would like to repay the loan. 
The program should then add 15% interest onto the amount borrowed and then inform the user how much their monthly payments will be.   
*/

double loan;
int months;
double interest = 0.15;

int main() {
    std::cout << "How much would you like to borrow? > "; // input
    std::cin >> loan;

    std::cout << "In how many months do you plane to repay the loan? > "; // input
    std::cin >> months;

    double total = loan + (loan * interest); // process
    double perMonth = total / months; // process

    std::cout << "You have to pay £" << perMonth << " per month"; // output
}
#include <iostream>

/*
Write a sale calculator. A shop is having a 20% off sale. 
The user will enter the full price of the product they want to buy. 
The program should then display how much the product is once the 20% has been taken off, as well as display the saving for that item. 
*/

double price;
double discountRate = 0.20;   // 20%

int main() {
    
    std::cout << "Enter the price of item > ";
    std::cin >> price;

    double savings = price * discountRate;
    double finalPrice = price - savings;

    std::cout << "You saved £" << savings << " and only paid £" << finalPrice; // £ symbols dont print for some reason, but that aside the code works
}

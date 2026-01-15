#include <iostream>
#include <string>

struct Product {
    std::string productName;
    int stockNumber;
    double price;
};

int main() {
    const int size = 3;
    Product productInventory[size];

    productInventory[0] = {"USB cable", 624, 1.74};
    productInventory[1] = {"HDMI adaptor", 523, 5.00};
    productInventory[2] = {"DVD-RW pack", 124, 10.99};

    double totalValue = 0;

    for (int i = 0; i < size; i ++) {
        std::cout << productInventory[i].productName << "\n";
        std::cout << productInventory[i].stockNumber << "\n";
        std::cout << productInventory[i].price << "\n";
        totalValue += productInventory[i].price;
    }

    std::cout << totalValue;

    return 0;
}
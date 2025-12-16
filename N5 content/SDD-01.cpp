#include <iostream>
#include <string>

std::string name;

int main() {
    std::cout << "What is your name? > ";
    std::cin >> name;

    std::cout << "Hello " << name << std::endl;
}
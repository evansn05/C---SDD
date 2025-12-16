#include <iostream>
#include <string>

/*
Write a program that will calculate the volume of a rectangular room. All variables should be integers. 
*/

int length;
int breadth;
int height;

int main() {
    std::cout << "Enter a length > ";
    std::cin >> length;

    std::cout << "Enter a breadth > ";
    std::cin >> breadth;

    std::cout << "Enter a height > ";
    std::cin >> height;

    int volume = length * breadth * height;
    std::cout << "The volume is " << volume << " units cubed" << std::endl;
}
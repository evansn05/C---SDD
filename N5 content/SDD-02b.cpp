#include <iostream>
#include <string>

/*
Write a program that will ask the user for the distance, the time and then calculate the speed.  

Tip: When carrying out a divide, you are likely to end up with a decimal number. Think carefully about what data types should be used. 
*/

double distance; 
int duration;
double speed;

int main() {
    std::cout << "Enter a distance > ";
    std::cin >> distance;

    std::cout << "Enter the duration taken > ";
    std::cin >> duration;

    speed = distance / duration;
    std::cout << "The speed is " << speed << " units per second";
}
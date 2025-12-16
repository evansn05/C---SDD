#include <iostream>

/*
Ask the user how many values there are, then using the fixed loop, take in that number of values and calculate the total. 
*/

int main() {
    int values;
    int value;
    int total = 0;

    std::cout << "How many values are there? > ";
    std::cin >> values;

    for (int i=0; i<values; i++) {
        std::cout << "Enter value " << i+1 << " > ";
        std::cin >> value;

        total += value;
    }

    std::cout << "The total value is " << total;
}
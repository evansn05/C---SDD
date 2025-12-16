#include <iostream>
#include <ctime>
#include <cstdlib>

/*
Create a program that populates an array with 100 random numbers between 0-100. 
Once the array has been populated, count how many of the random numbers are over 80. 
Print the contents of the array along with the amount of numbers over 80 to the screen so you can check your answer.  
*/

int main() {
    int numbers[100] = {};
    int total = 0;

    std::srand(std::time(NULL));

    for (int i=0; i<100; i++) {
        numbers[i] = std::rand() % 101;   
    }

    for (int j=0; j<100; j++) {
        std::cout << numbers[j] << std::endl;
        if (numbers[j] > 80) {
            total += 1;
        }
    }

    std::cout << "There are " << total << " numbers in the array above 80";

}
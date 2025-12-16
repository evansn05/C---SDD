#include <iostream>
#include <cmath>
#include <ctime>

/*
Write a program that will generate a “lucky dip” ticket for The National Lottery. 
The program should generate 6 numbers between 1 and 59. 
You’ll need to make sure that the program doesn’t select the same number twice. 
*/

int main() {
    std::srand(std::time(NULL));
    int numbers[6];

    for (int i = 0; i < 6; i++) {
        int num;
        bool duplicate;
        do {
            num = std::rand() % 59 + 1;  
            duplicate = false;

            for (int j = 0; j < i; j++) {
                if (numbers[j] == num) {
                    duplicate = true;
                    break;
                }
            }
        } while (duplicate);

        numbers[i] = num;
    }

    std::cout << "Your lucky dip numbers are: ";
    for (int i = 0; i < 6; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

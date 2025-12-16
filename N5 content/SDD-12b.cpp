#include <iostream>

/*
Write a program, using nested loops, that will display the 2 times table.   

Once you have done this, place it inside a nested loop so the program will display the 2, 3, 4, 5, 6, 7, 8, 9 and 10 times tables. 
*/

int main() {
    int iterations = 11;
    for (int i=1; i<iterations; i++) {
        for (int j=1; j<iterations; j++) {
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
    }
}
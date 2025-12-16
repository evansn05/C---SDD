#include <iostream>

/*
Julie has been training for a half marathon. 
She has run twice a week for 5 weeks and she is interested to see what is total distance is over that time. 
Write a program that will take in the distance of each run, calculate the overall total distance and display the distance on the screen. 
*/

int main() {
    int total = 0;
    int distance;

    for (int i=0; i<5; i++) {
        for (int j=0; j<2; j++) {
            std::cout << "Enter the distance ran > ";
            std::cin >> distance;

            total += distance;
        }
    }
    std::cout << "The total distance ran is " << total;
}
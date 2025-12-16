#include <iostream>

/*
Five pupils are tracking how many calories they have eaten that day for breakfast, lunch and dinner. 
Using nested loops, ask all the pupils to enter how many calories they had for each meal and display the total for all pupils to the screen. 
*/

int main() {
    int number = 5;
    int calories;
    int total = 0;

    for (int i=0; i<number; i++) {
        for (int j=0; j<3; j++) {
            std::cout << "How many calories did pupil " << i+1 << " have in meal " << j+1 << " > ";
            std::cin >> calories;

            total += calories;
        }
    }
    std::cout << "The five pupils had " << total << " calories";
}
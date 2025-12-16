#include <iostream>

/*
Create a menu system like the one below. 
When the user has selected which equation they would like the program to work out, 
the program should ask for the appropriate inputs, calculate, and then display the appropriate results. 
Feel free to use your previous programs from the Basic Arithmetic section as reference. 


The Equation Program

Please select an option from the following menu
1. Calculate the speed
2. Calculate the distance
3. Calculate the time 
4. Calculate the area of a rectangular room
5. Exit the program
*/

int main() {
    int userInput;

    std::cout << "The Equation Program" << std::endl 
              << std::endl << "Please select an option from the following menu" << std::endl
              << "1. Calculate the speed" << std::endl
              << "2. Calculate the distance" << std::endl
              << "3. Calculate the time" << std::endl 
              << "4. Calculate the area of a rectangular room" << std::endl
              << "5. Exit the program" << std::endl;

    std::cin >> userInput;

    if (userInput == 1) {
        int distance;
        int time;
        std::cout << "Enter a distance > ";
        std::cin >> distance;

        std::cout << "Enter a time > ";
        std::cin >> time;

        double speed = distance / time;
        std::cout << speed << " units per second";
    } else if (userInput == 2) {
        int time;
        double speed;
        std::cout << "Enter a time > ";
        std::cin >> time;

        std::cout << "Enter a speed > ";
        std::cin >> speed;

        double distance = speed * time;
        std::cout << distance << " units";
    } else if (userInput == 3) {
        int distance;
        double speed;
        std::cout << "Enter a distance > ";
        std::cin >> distance;

        std::cout << "Enter a speed > ";
        std::cin >> speed;

        double time = distance / speed;
        std::cout << "It would take " << time << " seconds";
    } else if (userInput == 4) {
        int length;
        int height;
        std::cout << "Enter length of the room > ";
        std::cin >> length;

        std::cout << "Enter height of the room > ";
        std::cin >> height;

        int area = length * height;
        std::cout << "The room is " << area << " units squared";
    } else {
        std::cout << "Goodbye!";
    }
}
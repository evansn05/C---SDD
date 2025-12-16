#include <iostream>
#include <cmath>
#include <iomanip>

/*
Create the variable pi = 3.141592653589793. 
Ask the user how many decimal places they would like to round pi to and display the new rounded pi to the screen.  
*/

int main() {
    double pi = 3.141592653589793;
    int places;

    std::cout << "How many places do you want to round pi to? > ";
    std::cin >> places;

    std::cout << std::fixed << std::setprecision(places);
    std::cout << std::round(pi * std::pow(10, places)) / std::pow(10, places);
}
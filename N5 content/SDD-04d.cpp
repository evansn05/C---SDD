#include <iostream>

/*
Create a basic password program. 
The password should be stored as a variable in the program code. 
The computer should then ask the user to enter the password, 
if the password matches then display “Access Granted” if the password does not match display “Access Denied”. 
Please remember that the password will be case sensitive.  
*/

int main() {
    std::string password = "EpFzYBPph7pZ";
    std::string passwordInput;

    std::cout << "Enter the password > ";
    std::cin >> passwordInput;

    if (passwordInput == password) {
        std::cout << "Welcome!";
    } else {
        std::cout << "Incorrect password.";
    }
}
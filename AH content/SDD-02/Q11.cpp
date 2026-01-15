#include <iostream>
#include <string>

void display(std::string songs[], std::string artists[], int plays[], int size) {
    for (int i = 0; i < size; i ++) {
        std::cout << "song: " << songs[i];
        std::cout << "artist: " << artists[i];
        std::cout << "plays: " << plays[i];
    }
}

int main() {
    const int size = 5;
    std::string array1[size] = {"Xanadu", "I'm Not Okay", "Kiss", "Light My Fire", "Barcelona"};
    std::string array2[size] = {"Rush", "My Chemical Romance", "Prince", "The Doors", "Twin Atlantic"};
    int array3[size] = {3092, 2980, 3010, 1893, 429};

    display(array1, array2, array3, size);

    return 0;
}
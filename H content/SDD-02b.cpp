#include <iostream>
#include <string>
using namespace std;

/*
A user wants to create a program which will allow the user to store details on animals in the Zoo. 
They want a sample of a program that will use a Record Structure (using an object). 
The Record structure should allow them to enter and display the following information on each animal. 
*/

// go to line 980 of "learning.cpp" for an explanation on records

struct Animal {
    string animal;
    bool endangered;
    string continent;
    double lifespan;
    string enclosure;
};

void addData(Animal animals[], int size);
void displayData(Animal animals[], int size);

int main() {
    const int size = 10;
    Animal animals[size];

    addData(animals, size);
    displayData(animals, size);
}

void addData(Animal animals[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nEnter details for animal " << i + 1 << ":\n";

        cout << "Animal name: ";
        cin >> animals[i].animal;

        cout << "Is it endangered? (1 = yes, 0 = no): ";
        cin >> animals[i].endangered;

        cout << "Continent of origin: ";
        cin >> animals[i].continent;

        cout << "Average lifespan (years): ";
        cin >> animals[i].lifespan;

        cout << "Enclosure name: ";
        cin >> animals[i].enclosure;
    }
}

void displayData(Animal animals[], int size) {
    cout << "\n" << "------ANIMAL DATA-------" << endl;    
    for (int i = 0; i < size; i++) {
        cout << "\nAnimal " << i + 1 << ":\n";
        cout << "Name: " << animals[i].animal << endl;
        cout << "Endangered: " << (animals[i].endangered ? "Yes" : "No") << endl;
        cout << "Continent: " << animals[i].continent << endl;
        cout << "Lifespan: " << animals[i].lifespan << " years\n";
        cout << "Enclosure: " << animals[i].enclosure << endl;
    }
}
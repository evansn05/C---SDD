#include <iostream>
#include <string>

using namespace std;


class Dog {
private: // encapsulation, private means only this object can access the attributes
    string name;
    string colour;
    float height;
    float length;
    float weight;
    string breed;

public:
    // constructor
    Dog(string dogName, string dogColour, float dHeight,
        float dLength, float dWeight, string dBreed)
        : name(dogName), colour(dogColour), height(dHeight),
          length(dLength), weight(dWeight), breed(dBreed) {}

    // __str__ equivalent
    string toString() const {
        return "\nDescription:\n"
               " name: " + name +
               "\n colour: " + colour +
               "\n height: " + to_string(height) +
               "\n length: " + to_string(length) +
               "\n weight: " + to_string(weight) +
               "\n breed: " + breed;
    }

    // getters and setters
    string getName() const { return name; }
    void setName(const string& dogName) { name = dogName; }

    string getColour() const { return colour; }
    void setColour(const string& dogColour) { colour = dogColour; }

    float getHeight() const { return height; }
    void setHeight(float dHeight) { height = dHeight; }

    float getLength() const { return length; }
    void setLength(float dLength) { length = dLength; }

    float getWeight() const { return weight; }
    void setWeight(float dWeight) { weight = dWeight; }

    string getBreed() const { return breed; }
    void setBreed(const string& dBreed) { breed = dBreed; }
};

class PoliceDog : public Dog { // inheritance
protected: // encapsulation, protected means this object and inherited ones can access the attributes
    int policeID;
    string handler;

public:
    // constructor
    PoliceDog(string dogName, string dogColour, float dHeight,
              float dLength, float dWeight, string dBreed,
              int pID, string h) 
        : Dog(dogName, dogColour, dHeight, dLength, dWeight, dBreed), // superclass constructor
          policeID(pID), handler(h) {}

    string toString() const {
        return Dog::toString() +
               "\n policeID: " + to_string(policeID) +
               "\n handler: " + handler;
    }
};

class SheepDog : public Dog {
public:
    SheepDog(string dogName, string dogColour, float dHeight,
             float dLength, float dWeight, string dBreed)
        : Dog(dogName, dogColour, dHeight, dLength, dWeight, dBreed) {}

    string getBreedType() const {
        if (getBreed() == "Border Collie") {
            return "Border Collie";
        }
        return "Unknown";
    }
};

int main() {
    Dog rex("Rex", "Black", 58.1f, 62.2f, 34.4f, "labrador"); // instantiation
    cout << rex.toString() << endl;

    PoliceDog max("Max", "White", 58.1f, 62.2f, 34.4f,
                  "labrador", 76, "Dave");
    cout << max.toString() << endl;

    max.setName("David");
    cout << max.toString() << endl;

    return 0;
}

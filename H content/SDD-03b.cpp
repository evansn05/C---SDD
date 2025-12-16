#include <iostream>    // for input/output
#include <iomanip>     // for formatted table columns (setw, left)
#include <string>      // for std::string
#include <limits>      // for clearing input buffer properly

using namespace std;

/*
  this constant controls how many city records we collect.
  changing this number automatically updates the size of the array
  and the number of times we loop, keeping everything consistent.
*/
const int RECORD_COUNT = 3;

/*
  struct city:
  this behaves like your python @dataclass.
  it stores each piece of information the user enters.
*/
struct City {
    string cityName;
    string country;
    float population;
    string language;
};

// function prototypes
void get_record(City records[]);
void display_record(const City records[]);

int main() {
    // create a fixed-size array using our named preset RECORD_COUNT
    City records[RECORD_COUNT];

    // gather data from user
    get_record(records);

    // display formatted results
    display_record(records);

    return 0;
}

/*
  get_record:
  - fills the fixed-size array with user-entered city data.
  - mirrors the python loop exactly: ask for city, country, population, language.
  - this function stores data directly into the array, using the loop index.
*/
void get_record(City records[]) {

    for (int i = 0; i < RECORD_COUNT; i++) {

        string userCity;
        string userCountry;
        float userPopulation;
        string userLanguage;

        // ask for each item exactly like python
        cout << "enter city in europe > ";
        getline(cin, userCity);

        cout << "enter country of city in europe > ";
        getline(cin, userCountry);

        cout << "enter population of city in europe > ";
        cin >> userPopulation;

        /*
          after using cin >> to read a float,
          we must clear the leftover newline so getline works properly again.
          without this, the next getline would instantly read an empty string.
        */
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "what is the primary language spoken > ";
        getline(cin, userLanguage);

        // store the collected data into the array element using aggregate initialisation
        records[i] = { userCity, userCountry, userPopulation, userLanguage };
    }
}

/*
  display_record:
  prints a header and then prints each record in a nicely aligned table.
  this uses setw() and left alignment to mimic your python f-string formatting.
*/
void display_record(const City records[]) {

    cout << "\n";
    cout << left
         << setw(10) << "city"       << "|"
         << setw(10) << "country"    << "|"
         << setw(10) << "population" << "|"
         << setw(15) << "main language"
         << "\n";

    // print each of the city records
    for (int i = 0; i < RECORD_COUNT; i++) {
        cout << left
             << setw(10) << records[i].cityName   << "|"
             << setw(10) << records[i].country    << "|"
             << setw(10) << records[i].population << "|"
             << setw(15) << records[i].language
             << "\n";
    }
}

#include <iostream>   // for std::cin, std::cout
#include <iomanip>    // for std::setw, std::left
#include <string>     // for std::string
// gonna admit here i used AI cuz i couldnt figure it out but it not that big a deal for this since i assume we wont need a record for our vex code

using namespace std;  // convenience for examples; in larger projects prefer explicit std::

/*
  named constant for array size:
  using a single named integer makes it easy to change how many records we collect.
  this replaces hard-coded '3' everywhere with RECORD_COUNT.
*/
const int RECORD_COUNT = 3;  // <-- change this number to collect more/fewer records

// a simple aggregate to hold one animal's fields.
// this mirrors the python dataclass in structure and intent.
struct Animal {
    string animal;        // type of animal, e.g. "elephant"
    string endangered;    // expected "Yes" or "No" string (same as your python)
    string continent;     // continent name
    float avg_lifespan;   // average lifespan in years (float to match python's float)
    string enclosure;     // enclosure identifier or description
};

// function declarations (prototypes)
// get_record will fill a fixed array passed in by the caller.
// display_record will print the contents of that array.
void get_record(Animal records[]);             // fill the records array
void display_record(const Animal records[]);   // display the records (const because we don't modify them)

int main() {
    // declare a fixed-size array of Animal using the named integer preset
    Animal records[RECORD_COUNT];

    // collect user input into the array
    get_record(records);

    // show the collected records on screen
    display_record(records);

    return 0; // standard success exit code
}

/*
  get_record:
  - responsibility: read RECORD_COUNT animal records from the user and store them into the provided array.
  - note: arrays decay to pointers when passed to functions, which is why we also rely on the RECORD_COUNT constant
          to know how many entries to read.
*/
void get_record(Animal records[]) {
    // loop exactly RECORD_COUNT times, matching the python loop that ran 3 times
    for (int i = 0; i < RECORD_COUNT; ++i) {

        // local temporaries for reading input before storing into the struct
        string animal_in;
        string endangered_in;
        string continent_in;
        float avglifespan_in;
        string enclosure_in;

        // prompt for animal type
        cout << "enter type of animal > ";
        getline(cin, animal_in);
        // note: getline reads the whole line including spaces, which mirrors python's input()

        // prompt for endangered status and validate to be "Yes" or "No"
        cout << "endangered > ";
        getline(cin, endangered_in);

        // validation loop: repeat prompt until exactly "Yes" or "No" is provided
        // this mirrors the python while endangered_in != "Yes" and endangered_in != "No"
        while (endangered_in != "Yes" && endangered_in != "No") {
            cout << "endangered (must be Yes or No) > ";
            getline(cin, endangered_in);
        }

        // prompt for continent
        cout << "continent > ";
        getline(cin, continent_in);

        // prompt for lifespan. we read a numeric float using operator>>
        cout << "lifespan > ";
        cin >> avglifespan_in;

        // validation for acceptable lifespan range (0 <= lifespan <= 500)
        // keep asking until the user enters a value inside that range
        while (avglifespan_in < 0.0f || avglifespan_in > 500.0f) {
            cout << "lifespan > ";
            cin >> avglifespan_in;
        }

        // after using operator>> to read a number, there's a leftover newline in the input buffer.
        // we call ignore() to discard that newline so the next getline() works correctly.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // prompt for enclosure
        cout << "enclosure > ";
        getline(cin, enclosure_in);

        // store the collected values into the array at index i.
        // the braced-init-list uses the struct's member order to initialise.
        records[i] = { animal_in, endangered_in, continent_in, avglifespan_in, enclosure_in };

        // small helpful message (optional) — confirms a record was stored
        // cout << "record " << i+1 << " saved.\n";
    }
}

/*
  display_record:
  - responsibility: print a header row and then print each record stored in the array.
  - we format columns similarly to the python f-strings using iomanip manipulators.
*/
void display_record(const Animal records[]) {
    // print header row with fixed widths using setw and left alignment
    cout << left
         << setw(10) << "animal"     << "|"
         << setw(10) << "endangered" << "|"
         << setw(15) << "continent"  << "|"
         << setw(20) << "average life span" << "|"
         << setw(10) << "enclosure"  << "\n";

    // iterate exactly RECORD_COUNT times so we print what we collected
    for (int i = 0; i < RECORD_COUNT; ++i) {
        // print each field with the same column widths used for the header.
        // the avg_lifespan prints as a float; it will use the default formatting for floats.
        cout << left
             << setw(10) << records[i].animal     << "|"
             << setw(10) << records[i].endangered << "|"
             << setw(15) << records[i].continent  << "|"
             << setw(20) << records[i].avg_lifespan << "|"
             << setw(10) << records[i].enclosure
             << "\n";
    }
}

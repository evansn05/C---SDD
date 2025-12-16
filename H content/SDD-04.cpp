#include <iostream>      // for cin, cout
#include <iomanip>       // for setw, setprecision, fixed, left
#include <string>        // for std::string
#include <limits>        // for numeric_limits used with cin.ignore

using namespace std;

/*
  named preset: change this single constant to adjust how many student records are handled.
  the rest of the program uses RECORD_COUNT so behaviour remains consistent.
*/
const int RECORD_COUNT = 10;   // number of student records (matches your python count)

/*
  struct grades:
  mirrors the python @dataclass Grades.
  idNo: integer id (we use the loop index in get_data)
  name: student name
  score: raw integer score (out of 160)
  percentage: percentage computed from score (stored as float to keep decimal places)
  grade: letter grade string like "A", "B", "C", "D", or "F"
*/
struct Grades {
    int idNo;
    string name;
    int score;
    float percentage;
    string grade;
};

// function prototypes
void get_data(Grades records[]);
void display_data(Grades records[]);
void modify_data(Grades records[]);

int main() {
    // fixed-size array of Records controlled by RECORD_COUNT
    Grades records[RECORD_COUNT];

    // populate the records by asking the user
    get_data(records);

    // show the records and allow modification / exit
    display_data(records);

    return 0;
}

/*
  get_data:
  - reads RECORD_COUNT student entries from the user
  - calculates percentage and grade for each entry
  - stores everything in the provided array
*/
void get_data(Grades records[]) {
    const int MAX_SCORE = 160; // total possible marks, used in percentage calculation

    for (int i = 0; i < RECORD_COUNT; ++i) {
        // prepare temporaries for input
        int studentID = i;               // id based on loop index (0..RECORD_COUNT-1)
        string studentName;
        int studentScore;
        float percentageScore;
        string graded;

        // name (use getline to accept spaces)
        cout << "enter student " << (i + 1) << " name > ";
        getline(cin, studentName);

        // score (read as integer)
        cout << "enter student " << (i + 1) << " score > ";
        cin >> studentScore;

        // validation loop: ensure score is within valid range 0..MAX_SCORE
        // note: use || (logical or) to catch values that are either below 0 or above the maximum.
        while (studentScore < 0 || studentScore > MAX_SCORE) {
            cout << "invalid. score must be between 0 and " << MAX_SCORE << ".\n";
            cout << "enter student " << (i + 1) << " score > ";
            cin >> studentScore;
        }

        // clear newline left by operator>> so next getline works correctly
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // percentage calculation:
        // formula: percentage = (score / total_possible_score) * 100
        // substitution: percentage = (studentScore / 160) * 100
        percentageScore = (static_cast<float>(studentScore) / static_cast<float>(MAX_SCORE)) * 100.0f;

        // determine letter grade
        if (percentageScore >= 70.0f) {
            graded = "A";
        } else if (percentageScore >= 60.0f) {
            graded = "B";
        } else if (percentageScore >= 50.0f) {
            graded = "C";
        } else if (percentageScore >= 40.0f) {
            graded = "D";
        } else {
            graded = "F";
        }

        // store the record in the array using aggregate initialisation
        records[i] = { studentID, studentName, studentScore, percentageScore, graded };
    }
}

/*
  display_data:
  - shows a formatted table of all records
  - offers options to modify an entry or exit
  - loops until the user chooses to exit (option 2)
*/
void display_data(Grades records[]) {
    int option = 0; // option chosen by user

    while (option != 2) {
        // header row
        cout << "\n";
        cout << left
             << setw(6)  << "id"        << "|"
             << setw(15) << "name"      << "|"
             << setw(14) << "score"     << "|"
             << setw(16) << "percentage" << "|"
             << setw(7)  << "grade"
             << "\n";

        // print each student record; show percentage with 2 decimal places
        for (int i = 0; i < RECORD_COUNT; ++i) {
            cout << left
                 << setw(6)  << records[i].idNo << "|"
                 << setw(15) << records[i].name << "|"
                 // score column shows "score/160" similar to your python output
                 << setw(7)  << records[i].score << "/160" << setw(5) << "|" 
                 // percentage formatted to 2 d.p.
                 << setw(10) << fixed << setprecision(2) << records[i].percentage << "%" << setw(3) << "|"
                 << setw(7)  << records[i].grade
                 << "\n";
            // reset format flags for subsequent non-numeric prints (setw etc remain)
            cout << defaultfloat;
        }

        // options menu
        cout << "\noptions\n1 - change an entry\n2 - exit\n> ";
        cin >> option;

        // handle invalid non-integer input: if cin fails, clear it and set option to something invalid
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid input; please enter 1 or 2.\n";
            option = 0; // force repeat
            continue;
        }

        // clear newline so subsequent getline in modify_data works correctly
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (option == 1) {
            modify_data(records);
        } else if (option == 2) {
            // exit loop and finish program
            cout << "exiting program. goodbye!\n";
            break;
        } else {
            cout << "invalid option.\n";
        }
    }
}

/*
  modify_data:
  - ask the user for an id index to edit
  - prompt for new name and score, validate score
  - recalc percentage and grade, then overwrite the record fields
*/
void modify_data(Grades records[]) {
    const int MAX_SCORE = 160;
    int idlocation;

    cout << "which id do you wish to edit > ";
    cin >> idlocation;

    // check idlocation is within range
    if (cin.fail() || idlocation < 0 || idlocation >= RECORD_COUNT) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "invalid id. returning to main menu.\n";
        return;
    }

    // clear newline before using getline for name
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string studentName;
    int studentScore;

    cout << "enter id " << idlocation << " name > ";
    getline(cin, studentName);

    cout << "enter " << idlocation << " score > ";
    cin >> studentScore;

    while (studentScore < 0 || studentScore > MAX_SCORE) {
        cout << "invalid. score must be between 0 and " << MAX_SCORE << ".\n";
        cout << "enter " << idlocation << " score > ";
        cin >> studentScore;
    }

    // calculate new percentage and grade
    float studentPercentage = (static_cast<float>(studentScore) / static_cast<float>(MAX_SCORE)) * 100.0f;
    string graded;
    if (studentPercentage >= 70.0f) {
        graded = "A";
    } else if (studentPercentage >= 60.0f) {
        graded = "B";
    } else if (studentPercentage >= 50.0f) {
        graded = "C";
    } else if (studentPercentage >= 40.0f) {
        graded = "D";
    } else {
        graded = "F";
    }

    // apply changes to the array entry
    records[idlocation].name = studentName;
    records[idlocation].score = studentScore;
    records[idlocation].percentage = studentPercentage;
    records[idlocation].grade = graded;

    // consume leftover newline so next input in display_data is clean
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "record updated for id " << idlocation << ".\n";
}

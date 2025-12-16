#include <iostream>
#include <string>
using namespace std; // this is considered bad programming practice, but the lines for parameter passing withs arrays were getting so long it became better to do this
// in actual practice, parameter passing with arrays is bad. you should avoid it by using a record or a vector

/*
Create a program that will ask the user to enter 10 names of students and their valid score between 0-160. 
Once all scores have been entered the program should then calculate the percentage of each score. 
Once the percentages have been calculated each student should be assigned a grade. 
Above 70% is an “A”, above 60% is a “B”, above 50% is a “C”, above 40% is a “D” and anything below 40% is a Fail. 
The program should then display the data back to the user. 
Four arrays should be used in parallel. 
*/



/*
i know i havent done this on any Nat5 program, but for higher i feel the explanations are necessary
an "array" in C++ is not the same as a "list" in python, arrays do not know their own size but the size is fixed
this has pros and cons
the immediate con is that you cannot have your code correct itself if the size of the array changes
however, this is only an issue in programming not practice, since the array can only change size at its creation point
whilst running the arrays size is fixed
the pro is that you can then pass around the size of the array as a constant variable, the word "const" means it wont change

the functions at the top of the code are like an instantiation, theyre saying to the code "these functions exist"
C++ uses a compiler, that means the code knows everything thats present, every variable, function, object, etc before doing a thing
but once it starts running, it takes a top-down approach and reads from the top to the bottom of the code
it can only use something that was created above the point where its being called
functions can be instantiated at the top and then defined later in the code, and it will know to call the later version still

having wrote "using namespace std;" we can actually cut out "std::" in every place in appeared before
i was not doing this before because the namespace has a lot of functions and objects inside you cant see
these functions often use commonly used words for their names such as "time", and as a result it can easily clash with your code
to avoid these errors, its better to just type "std::" each and every time

the functions are using whats known as "pass by reference" which means it passes the actual parameter and uses the actual parameter
whatever changes to the variable inside the function, will impact the variable outside too
in python we use "pass by value" which is when the actual parameter is copied into a formal parameter, and changes are done to the copy not the original

when creating a function, it will sometimes return something and sometimes will not
if it is, you must define the function using what it will return, if it is not, you define it using "void"
*/

void getInput(string names[], int scores[], int size);
void calculatePercentages(const int scores[], double percentages[], int size);
void assignGrades(const double percentages[], char grades[], int size);
void displayResults(const string names[], const int scores[], const double percentages[], const char grades[], int size);

int main() {
    const int SIZE = 10;
    string names[SIZE];
    int scores[SIZE];
    double percentages[SIZE];
    char grades[SIZE];

    getInput(names, scores, SIZE);
    calculatePercentages(scores, percentages, SIZE);
    assignGrades(percentages, grades, SIZE);
    displayResults(names, scores, percentages, grades, SIZE);
}

void getInput(string names[], int scores[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];

        do {
            cout << "Enter score for " << names[i] 
                 << " (0–160): ";
            cin >> scores[i];

            if (scores[i] < 0 || scores[i] > 160) {
                cout << "Invalid score. Must be between 0 and 160.\n";
            }
        } while (scores[i] < 0 || scores[i] > 160);

        cout << endl;
    }
}

void calculatePercentages(const int scores[], double percentages[], int size) {
    for (int i = 0; i < size; i++) {
        percentages[i] = (static_cast<double>(scores[i]) / 160.0) * 100.0;
    }
}

void assignGrades(const double percentages[], char grades[], int size) {
    for (int i = 0; i < size; i++) {
        if (percentages[i] > 70) {
            grades[i] = 'A';
        }
        else if (percentages[i] > 60) {
            grades[i] = 'B';
        }
        else if (percentages[i] > 50) {
            grades[i] = 'C';
        }
        else if (percentages[i] > 40) {
            grades[i] = 'D';
        }
        else {
            grades[i] = 'F';
        }
    }
}

void displayResults(const string names[], const int scores[], const double percentages[], const char grades[], int size) {
    cout << "\n----- STUDENT RESULTS -----\n";
    for (int i = 0; i < size; i++) {
        cout << "Name: " << names[i]
             << " | Score: " << scores[i]
             << " | Percentage: " << percentages[i] << "%"
             << " | Grade: " << grades[i]
             << endl;
    }
}

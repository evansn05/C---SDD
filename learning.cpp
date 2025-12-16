// -------------- INSTALLING C++ COMPILER -----------------
/*
the compiler allows you to run this code, if you just want to read then ignore the installation process

step 1. install MinGW-w64
go to; winlibs.com
download the latest MinGW-w64 GCC release (you want "UCRT" version, not "MSVCRT")
extract the folder downloaded into a place like "C:\mingw64" (this destination will not exist yet, just unzip it into "C:\" with that folder name)
locate the bin direction "C:\mingw64\bin"

step 2. add compiler to PATH
press "Windows key + R" and type "sysdm.cpl"
go to Advanced -> Environment Variables 
under User Variables, select Path -> Edit 
click new and paste "C:\mingw64\bin"
then click ok on all tabs
just to test it works, open a powershell and type "g++ --version", if it prints information it works, if it errored it did not work

step 3. install code runner
open VS code
go to extensions
type in "Code Runner"
install the one by Jun Han

*/








#include <iostream> // this line is necessary for all C++ programs and must be at the top, this basically allows the compiler to search the program when it runs
#include <string> // apparently this is needed to be able to use strings, but it works without this, so im not sure
using namespace std; // hard to explain before youve read the rest of the file, but it basically allows you to get user inputs and send to screen


// a lot of the examples and code ive used here are straight from our S3 and S4 programming tasks for learning python
// there is a lot of comments all over this program, so try not to get lost in it, i often switch between the two methods for comments
// the double forward slash means single line, and then using /* and */ is to open and close respectively a multi-line comment
// i want to just put here this file is not designed for learning to do VEX code, its just what ive done to learn the language since im planning on using it for my project
// ive put some headers on the important areas, this file contains everything from nat5, higher and adv higher for a programming language
// theres no colour coding for the headers so just use the side bar to find the big blank spaces between eachs section of code to find where each thing is


// -------------- VARIABLES AND DATA TYPES -----------------

/*
string - array of characters
bool - true or false
int - whole number
double - decimal numbers
*/
int age = 16;
double price = 2.99;
string name = "Nathan";
bool isStudent = true;
/*
you can define a variable with no value but it needs a type. 
you cannot use the variable until a value is assigned however

cout - computer out
cin - computer in
>> - extraction operator, for cin
<< - insertion operator, for cout

endl - takes a new line
*/





// defining a function for the future, not relevant at this time but simply allows the code to know it exists and wont error in the main function
// just ignore this and move on for now
void main2();
void main3();
void main4();
void main5();
void main6();
void main7();
void main8();
void main9();
void main10();
void main11();
void main12();
void main13();
void main14();
void main15();
void main16();
void main17();









// -------------- MAIN FUNCTION -----------------

/* 
in C++, it doesnt work with global space like python does. everything must be a function or else C++ wont know where to run
since C++ is a compiled language, it reads the whole program before running
this means it knows every variable and type, every loop and every function, etc and can assign memory accordingly
it searches the whole program to find every variable defined and every function, object and so forth to allocate memory space to it
this means you can define variables in global space wherever you want and you can use it anywhere - remember that compilers read top to bottom still so if you defined something below where you want it then the code will error
downside, this means the program doesnt know where to start as everything is now placed neatly into memory
it looks for the "main()" function to run, which *must* be an int - this int just means the function is going to return an integer
if the function runs successfully, theres a hidden line "return 0" at the end saying it was successful, which displays when this file is imported to be used elsewhere
*/
int main() {
    cout << "Hello!" << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();     // basically when you collect an input, it says "string\n" and the \n is called an input buffer which occurs from the enter key being pressed at the end of an input in terminal
                      // in order to clear the input buffer (the \n), you need to do a .ignore() to the cin

    cout << age << endl;

    main2();   // function calls are identical to python, these calls are jsut for the later task explanations, you are more than welcome to comment these out just now until you come to looking at that part of the code
    main3();   
    main4(); 
    main5();  
    main6();
    main7();
    main8();
    main9();
    main10();
    main11();
    main12();
    main13();
    main14();
    main15();
    main16();
    main17();
    return 0; // this return statement must return data identical to what you said it would return
    // typically the return statement is default to this line, you can set it to other values but standard convention is that 0 means successful run, and other values mean certain errors 
}










// -------------- CIN PITFALL AND INPUT BUFFER -----------------

/*
the issue with "cin" is that it stops reading the input after the first space
this means if you have a string and put in "hello world" in it, "world" gets ignored
*/
void main2() { // try to have better naming skills from me just adding a number 😭
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName); // the getline() function fails if you make one of the input parameters "cin" AND collected your input on an earlier line, which you will see in the main3() function
    cout << "You entered: " << fullName << endl;
}
/*
"void" is like "null" for python and sqlite, it simply means return nothing, its a procedure rather than a function
*/

void main3() {
    string nickNames;
    cout << "Enter your full nick name: ";
    /* cin >> nickNames; */ 
    // this line would work, but for the sake of the solution its being commented to prevent errors

    /* getline(cin, nickNames); */
    // this line is commented out to prevent errors, but it will not work, the solution to this problem is shown below

    getline(cin, nickNames);

    cout << "Hello " << nickNames << endl;
}

// below is just an example function to demonstrate the input buffer, it will not run with the rest of the code
void buffer() {
    int age;
    string name;

    cin >> age;       // you types: 25<Enter>
    getline(cin, name);  // immediately reads leftover '\n' from the enter key
    cout << "Name: " << name << endl;  // prints nothing
}



/*
before i move onto condition statements and loops, i want to just take a brief few lines to explain the need for line 33 now that this information has been introduced
its like an import from python, it allows us to use cout and cin more easily, the full lines for those functions are actually:
std::cout <<
and
std::cin >>
and using the namespace std call at the start means you can avoid needing to write "std::" each and every time
it is an optional addition, but obviously saving writing "std::" many times can be helpful overall
for us as high school students it makes no difference, but in general programming practice its looked down on
in this respect following from this point i will now include the "std::" in the code
*/








// -------------- CONDITION STATEMENTS -----------------


/*
these are pretty straight forward, and a near copy and paste from what we know in python
your comparison symbols are still the same
== - directly equal
>= - greater than or equal to
<= - less than or equal to
> - greater than
< - less than
!= - not equal to
*/
void main4() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) { // the brackets simply say "heres the condition"
        cout << "You are an adult." << endl;
    } else { // the else would still work on a new line, but just to show what if statement its part of its good practice to do this
        cout << "You are not an adult." << endl;
    }
}

// the following function introduces elif statements and string comparisons for C++
void main5() {
    // elif statements
    int mark;
    std::cout << "Enter your mark: ";
    std::cin >> mark;

    if (mark >= 70) {
        std::cout << "Grade A" << endl;
    } else if (mark >= 60) {
        std::cout << "Grade B" << endl;
    } else if (mark >= 50) {
        std::cout << "Grade C" << endl;
    } else {
        std::cout << "Fail" << endl;
    }

    // string comparisons
    string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    if (name == "Nathan") { // these work as youd expect them to, just remember that strings are case sensitive i.e. "nathan" != "Nathan"
        std::cout << "Welcome back!" << endl;
    } else {
        std::cout << "Hello, stranger!" << endl;
    }
}








// -------------- LOOPS -----------------

/*
theres a lot of familiar and unfamiliar syntax when it comes to loops, to start with a fixed loop, it follows the code:

for(initialisation; condition; update)

initialisation - this is the starting point of the loop, and *typically* you define a new variable here, this means you need to also define the datatype too
condition - this is the end point of the loop, you will usually from the initialised variable so theres no need to define a datatype
update - this tells the loop how many it should increment the variable by on each run

the update part will introduce some familiar syntax in a new way, assume "i" is the variable defined for the examples:
i++ - increase increments by 1 each time (i = i + 1)
i-- - decrease increments by 1 each time (i = i - 1)
i+=n - increase increments by n each time (i = i + n)
i-=n - decrase increments by n each time (i = i - n)
for the last two, the multiplier and divide syntax is the same but with "*=" and "/=" instead
*/

void main6() {
    // loop to count in increments of 1
    for (int i = 1; i <= 5; i++) { 
        std::cout << i << endl;  // prints 1,2,3,4,5
    }

    // counting backwards
    for (int i = 5; i >= 1; i--) {
        std::cout << i << " "; // the quotations just creates a blank space meaning itll count 5 4 3 2 1
    }

    // skip numbers
    int i = 1;
    for (i; i <= 10; i += 2) { // in this example, "i" is already defined prior to the loop, so there is no need to define it inside, just state thats the variable being used
        std::cout << i << " ";  // prints odd numbers 1,3,5,7,9
    }

    // multiple variables
    for (int i = 0, j = 10; i < 5; i++, j--) { // since you are defining both variables at the same time, you can write int once and just put a comma, but if theyre different then you have to put one for both
        std::cout << i << " ";
        std::cout << j << " "; 
    }

    // using multiplier and \n
    for (double i=1.5; i < 10; i *= 2) {
        std:: cout << i << "\n";
    }

    /*
    if you run the last few loops, youll notice the first loop is spread across multiple lines and the next three are put on the same line
    the " " in those three loops are called a string literal, its just an empty string to make a blank space, but without "endl" or "\n" the code doesnt know to use a new line
    this means its all placed onto the same one line
    you may of noticed on the last loop, the "1.5" was left on the line before
    this is because that until the end of the first iteration of the loop, there is no \n occurred anywhere in the code, good practice to avoid this would be to put \n at the start of the loop
    */
}


/*
now, a conditional loop is actually a lot easier than a for loop, with the simple code:

while (condition) {
    code to repeat
}

the condition has a few options, for the variable "i" and integers "n";
i > n
i < n
true
false
true or false will just run forever, if you put a string variable into the loop, itll run forever IF the variable has an existing string attached to it
*/

void main7() {
    int n = 0;
    while (n < 5) {
        std::cout << n << endl;
        n++; // this does the same increment from for loops, the "++" and the others work outside condition statements too
    }

    int m = 1;
    while (true) { // this is how you create an infinitely running loop, in order to escape you need to use the break command
        std::cout << m << endl;
        m++;
        if (m > 10) {
            break; // identical to python, it breaks out of the loop
        } else {
            continue; // identical to python, it moves on to the next iteration of the loop
        }
    }

    /*
    one of the new functions that is introduced with C++ and is not in python is a "do ... while()" program, it means "do this, then check if the loop can run"
    this means that even if the loop condition is not met to run, the "do" part will still happen
    */

    int x = 10;
    do {
        std::cout << "This will print once" << endl;
    } while (x < 5); // since x = 10, the condition is not met, thus the loop never runs
}








// -------------- FUNCTIONS -----------------

/*
im not gonna spend too much time explaining this since most of it has been done through natural process with everything else thus far, but i will explain parameter passing
*/

int add(int a, int b) { // this is a straight forward function, it takes in two integer parameters (you must specify always what type of data it expects)
    std::cout << "1 + 2 = ";
    return a + b;
}

/*
the new concepts is "pass by reference" and "pass by value", which are two types of parameter passing
in python we use "pass by value", which is when the variables passed into a function are copied and put into a new variable, so changes made inside the function do not effect the original variable
"pass by reference" is when you put the actual variable into the function, so changes made inside happen outside too
there is a third one called "pass by pointer", which is when you send the pointer to memory into the function rather than just a variable, but thats way more complicated than we will ever see ourselves needing so i wont bother
*/

// pass by value - the function is called inside main8() below, just so you can see whats passed inside it
void noChange(int x) {
    x = 100;
}

// pass by reference 
void change(int &x) { // the "&" is necessary to specify pass by value
    x = 100;
}

void minMax(int a, int b, int &minVal, int &maxVal) { // this is a mixed function, it reads in two variables which are copied from actual parameters into formal parameters, and then two which are passed in as theyre actual variable so changes made here happen outside too
    if (a < b) {
        minVal = a;
        maxVal = b;
    } else {
        minVal = b;
        maxVal = a;
    }
}


void main8() { // this is just to simplfiy things for me, so i only have to call one functions in main and it will call all the prior functions
    std::cout << add(1, 2) << endl;

    // pass by reference
    int a = 5;
    noChange(a);
    std::cout << a << endl; // still 5

    // pass by value
    int b = 5;
    change(b);
    std::cout << b << endl; // now 100

    int minVal;
    int maxVal;
    b = 5;
    a = 1;
    minMax(a, b, minVal, maxVal);
    std::cout << "Minimum Value: " << minVal << "\nMaximum Value: " << maxVal << endl;
}












// -------------- ARRAYS -----------------

/*
im going to introduce arrays here at the start, and then follow with some code that shows how you can use an array
unlike python, in C++ we have actual arrays, not lists
this means that the data stored is fixed in size, do not shrink or grow, and do not track their own size

an array is defined as:
datatype arrayName[arraySize] {..., ..., ...};
*/

void main9() { // this function will be used for all array activity, not just one for each like the last section
    // accessing array at certain positions
    int numbers[5] = {10, 20, 30, 40, 50}; // initialises an array to be used

    std::cout << numbers[0] << endl;  // prints first element
    std::cout << numbers[4] << endl;  // prints last element

    
    // standard looping through an array
    int nums[5] = {3, 6, 9, 12, 15};

    for (int i = 0; i < 5; i++) { // obviously this is not as effective, since if the array changed size this will break, but an array doesnt actually change size from running code itll only change size when writing so this should still always work
        std::cout << "Index " << i << ": " << nums[i] << endl; // displays each element of the array and at what index
    }


    // updating data inside an array
    int data[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++) {
        data[i] = data[i] * 10; // multiplies each element by 10
    }

    for (int i = 0; i < 4; i++) { // this displays the content of the array
        std::cout << data[i] << " ";
    }


    // looping using a while loop instead of a for loop
    int arr[3] = {7, 14, 21};

    int i = 0;
    while (i < 3) {
        std::cout << arr[i] << endl;
        i++;
    }

    // looping through values of an array
    int scores[4] = {50, 60, 70, 80};

    for (int value : scores) { // this loops through the array itself, rather than the size of the array, where "value" is whats stored inside the array at that iteration of the loop, e.g. iteration 1 = 50 - important to note that "value" is a copy of the data in the array, and is not the original variable
        cout << value << endl;
    }
}


/*
similar in python, a string works like an array of characters
using this information, and the techniques just mentioned, we can loop through a string
*/

void main10() {
    // looping based on number of characters
    string word = "Hello";

    for (int i = 0; i < word.size(); i++) { // ".size()" is like our "len()" command in python, it simply gets the number of characters in the word, remember for an input string to do a ".ignore()" to remove the extra character, or the array will be one space larger
        std::cout << "Character " << i << ": " << word[i] << endl;
    }

    // the more effective method is obviously to use the range of values of an array method for looping
    string message = "I'm Nathan";

    for (char c : message) {
        std::cout << c << endl;
    }



    // this is a mini program to count the number of values in a word, making use of several learned features
    string text = "hello world";
    int count = 0;

    for (char c : text) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // the "||" is like an "or", similarly you can use "&&" to say "and"
            count++;
        }
    }

    std::cout << "Number of vowels: " << count << endl;
}

/*
a common mistake is when setting the size in the loop is to do "i <= 5" for an array of size "5"
this will not work
the array counts 0, 1, 2, 3, 4 and thats five iterations of the loop too, i.e i=0 to i=4 for i<5
if you say i <= 5, it will run another iteration of the loop and you will get a list out of bounds error
*/










// -------------- STANDARD ALGORITHMS AND STANDARD FUNCTIONS -----------------
// -------------- STANDARD FUNCTION: LENGTH -----------------

/*
the issue with an array for finding the length is that arrays do not store their size, meaning no "length()" command will work on it
but, we do have a formula we can use to find the length alternatively

length = size of bits of array/size of bits of one element in the array

and this formula works to find the length
we use the function "sizeof()" which returns the number of bits of an item

however if you have a string, the "length()" command does work
*/

void main11() {
    int nums[5] = {10, 20, 30, 40, 50};
    int length = sizeof(nums) / sizeof(nums[0]);

    std::cout << "Length = " << length << endl;


    string name = "Nathan";

    std::cout << "Length = " << name.length() << endl;
}


// -------------- STANDARD FUNCTION: SUM -----------------

/*
C++ doesnt have an official way to sum an array, since an array doesnt have to be integers it can be doubles or strings
so we have to use a loop
*/

void main12() {
    int nums[5] = {3, 7, 2, 9, 4};
    int sum = 0; // this is a case where a value must be assigned, since if you dont theres nothing attached, so on line 585 "nothing = nothing + something" wont work

    for (int i = 0; i < 5; i++) {
        sum = sum + nums[i];
    }


    int numbs[5] = {3, 7, 2, 9, 4};
    int sum2 = 0;

    int length = sizeof(numbs) / sizeof(numbs[0]);

    for (int i = 0; i < length; i++) {
        sum2 += numbs[i]; // shorthand for sum = sum + nums[i]
    }

    std::cout << "Sum = " << sum2 << endl;
}



// -------------- STANDARD FUNCTION: RANDOM -----------------

/*
now typially we do this at the very start of the code, but just to save you scrolling up 600 lines im doing it here
just like in python, to do a random function C++ we require an import, which looks like below
*/

#include <cstdlib>

/*
this is how you do an import of modules in C++
*/

void main13() {
    for (int i = 0; i < 5; i++) {
        std::cout << rand() % 10 + 1 << " ";
    }
}




// -------------- STANDARD ALGORITHM: LINEAR SEARCH -----------------

/*
a linear search from python to C++ works identical, its just searching an array to find a desired value
*/

void main14() {
    int nums[6] = {4, 8, 1, 9, 2, 7};
    int target = 9;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (nums[i] == target) {
            found = true;
            std::cout << "Found at index " << i << endl;
            break; // stop searching after finding it
        }
    }
    if (!found) {
        std::cout << "Not found" << endl;
    }
}

/*
Start at the first element.
Compare each element with target.
If it matches → stop the loop and mark found = true.
If no element matches → found stays false → print “Not found”.

a linear search is simple but it can grow slow for large arrays
*/

// -------------- STANDARD ALGORITHM: COUNT OCCURENCES -----------------

/*
im not gonna put much to this its pretty much stuff already explained and it does the same thing python does
*/

void main15() {
    int nums[8] = {3, 1, 3, 5, 3, 7, 3, 2};
    int target = 3;
    int count = 0;

    for (int i = 0; i < 8; i++) {
        if (nums[i] == target) {
            count++;
        }
    }

    std::cout << target << " appears " << count << " times" << endl;
}




















// -------------- FILE HANDLING -----------------

/*
in order to read from a file, we need another import
#include <fstream>
this just allows all file management and imports three classes
ifstream - input file stream (read)
ofstream - output file stream (write)
fstream - does both 
*/

// file write example
void fileWriteExample() { // ive not called this function in the main one since i dont want to write loads of files into my folders, but just know this does work
    ofstream outFile("example.txt");  // open file for writing (creates file if it doesn't exist)

    if (!outFile) {  // check if file opened successfully, much like in python if you do "if something:" and it has any value, it returns "TRUE", this is checking "if !something" meaning "if not something" and if the file does not open it returns "FALSE" which the if statement is wanting
        std::cout << "Error creating file!" << endl;
        return;
    }

    outFile << "Hello, this is a file example.\n";
    outFile << "We can write numbers too: " << 42 << endl;

    outFile.close();  // always close files when done
    std::cout << "File written successfully." << endl;
}

// file read example
void fileReadExample() {
    ifstream inFile("example.txt");  // open file for reading

    if (!inFile) {
        std::cout << "File not found!" << endl;

        // create a default file so code continues
        ofstream defaultFile("example.txt"); // since no file exists, it creates one
        defaultFile << "Line 1: Hello World\n";
        defaultFile << "Line 2: C++ File I/O Example\n";
        defaultFile.close();

        inFile.open("example.txt"); // open again for reading
    }

    string line;
    while (getline(inFile, line)) {  // read line by line
        std::cout << line << endl;        // print to screen
    }

    inFile.close();
}















// -------------- MULTI-DIMENSIONAL ARRAYS -----------------

/*
these form in a similar way to python does with lists, just in the C++ method for arrays

type arrayName[rows][columns];

this states how many rows it will have and for how many columns
you can add more dimensions to it, but for the sake of my sanity im just gonna do a 2D array
*/

int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

/*
to read through a 2D array, you will need a nested loop to run through each row and each column
*/

void main16() {
    int matrice[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << matrice[row][col] << " ";
        }
        std::cout << endl;
    }
}

// this is how to sum a 2D array of numbers
void main17() {
    int sum = 0;

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            sum += matrix[r][c];
        }
    }

    cout << "Sum = " << sum;
}

// a 3D array would look like this
int cube[2][3][4];
// but you will never need it, so this is just curiousity



















// -------------- OBJECT ORIENTATED PROGRAMMING -----------------

/*
a class is like a blueprint or a template for creating objects
each class tells us:

what the object will have
what the object can do

it is defined in global space, and the object itself does not need given a datatype since its a class
*/

class Dog {
public: // this is an "Access Modifier"
    std::string name;
    int age;

    void bark() { // this is a method
        std::cout << name << " says woof!\n";
    }
};
/*
this tells us that:
every dog has a name
every dog has an age
every dog can bark
*/

/*
in C++, we have "Access Modifiers", which describe how accessible the constructed variables can be inside
C++ uses
public: -> other code can freely access the property
private: -> properties are hidden from outside access 
protected: -> like private, but accessible to subclasses (used in inheritance)
this is how encapsulation is used in C++
you should know that encapsulation is also used on the methods, but generally should be public anyway
*/

/*
a constructor works a bit differently in C++ compared to python, but it looks a little like this
*/
class Dog2 {
public:
    std::string name;
    int age;

    // Constructor
    Dog2(std::string n, int a) { // "n" and "a" are the inputs from when the object is being instantiated, you use the object name in constructors and they have no return type
        name = n;
        age = a;
    }
};

/*
instantiation is quite simple and similar to python
the datatype is the object itself, and then you give it the variable name

class name(variables to input);
*/
Dog myDog("Buddy", 3);
myDog.bark();


/*
since in C++ we have actual encapsulation, we require getter and setter methods
in python encapsulation is a disguise and doesnt really work, we just pretend it does
*/

class BankAccount {
private:
    double balance;

public:
    BankAccount(double start) {
        balance = start;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }
};



/*
inheritence is when it takes the properties and methods of one class, and uses it in another to save rewriting several lines of code
*/
class Animal {
public:
    void breathe() {
        std::cout << "Breathing\n";
    }
};

class Dog : public Animal { // this is how you inherit properties, you need to specify the access modifier
public:
    void bark() {
        std::cout << "Woof!\n";
    }
};

/*
just like functions, which i know i did not mention before but im going to now, we can do something called "overloading"
this is when you create several functions or methods or objects using the same name, but change the properties
for example if you make and "add(int a, int b)" and have it return "a + b", if you have three numbers you want to add you have to call this function twice
or you can make a second function "add(int a, int b, int c)" and it will call the more appropriate function for its purpose
*/




















// -------------- RECORDS -----------------

/*
records work differently from python
in python we create an object and just give it variables, meaning its just a data handler and thus becomes a record
in C++, we create a structure and it handles the data
like an object, we create this in global space for use inside functions
*/
struct Pupil {
    std::string name;
    int age;
    double mark;
};

// using a record is fairly straight forward
void main18() {
    Pupil p1; // creates a variable for the record, the datatype is the record

    p1.name = "Nathan";
    p1.age = 17;
    p1.mark = 92.5;

    std::cout << p1.name << " is " << p1.age << " years old and scored " << p1.mark << ".\n";
}

// we also need to know how to make an array of records
void main19() {
    Pupil classList[5];   // array of 5 Pupil records, the datatype is the record

    classList[0].name = "Nathan";
    classList[0].age = 17;
    classList[0].mark = 91.2;

    classList[1].name = "Amy";
    classList[1].age = 16;
    classList[1].mark = 87.4;

    std::cout << classList[0].name << " has mark " << classList[0].mark << endl;
    std::cout << classList[1].name << " has mark " << classList[1].mark << endl;
}
/*
the problem with this method is that it takes up too many lines of code to do these if you have larger numbers than 5
so its mroe effective to just use a loop and vary how many times the loop will run
*/

void main20() {
    Pupil classList[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter name: ";
        std::cin >> classList[i].name;

        std::cout << "Enter age: ";
        std::cin >> classList[i].age;

        std::cout << "Enter mark: ";
        std::cin >> classList[i].mark;
    }

    std::cout << "\n--- Class Summary ---\n";
    for (int i = 0; i < 3; i++) {
        std::cout << classList[i].name << " | Age: " 
             << classList[i].age << " | Mark: " 
             << classList[i].mark << endl;
    }
}

// below is an example of a linear search algorithm being used on a record
void main21() {
    string target;
    std::cout << "Enter name to search for: ";
    std::cin >> target;

    bool found = false;

    for (int i = 0; i < 3; i++) {
        if (classList[i].name == target) {
            std::cout << target << " scored " << classList[i].mark << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Pupil not found.\n";
    }
}
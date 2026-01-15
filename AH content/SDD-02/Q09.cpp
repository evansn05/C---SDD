#include <iostream>
#include <string>

struct Tweet {
    std::string handle;
    std::string message;
    int views;
};

int main() {
    std::string handle = "compednet";
    std::string message = "this is a great example of a record";
    int views = 178;
    Tweet tweets = {handle, message, views};
    std::cout << tweets.handle << "\n";
    std::cout << tweets.message << "\n";
    std::cout << tweets.views << "\n";
}
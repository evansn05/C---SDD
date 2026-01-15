#include <iostream>
#include <string>

class Track {
public:
    std::string title;
    std::string artist;

    Track() {} // default constructor for array
    Track(std::string t, std::string a) {
        this->title = t;
        this->artist = a;
    }

    void showTrack() {
        std::cout << this->title << ": " << this->artist << "\n";
    }
};

class Collection {
public:
    static const int size = 4; // fixed size
    Track tracks[size];

    Collection(Track tr[]) {
        for (int i = 0; i < size; i++) {
            tracks[i] = tr[i];
        }
    }

    void showTracks() {
        for (int i = 0; i < size; i++) {
            tracks[i].showTrack();
        }
    }
};

int main() {
    // create Track objects from string arrays
    std::string titles[4] = {"Sugar Sugar", "My boy lollipop", "Walking back to happiness", "Twist and Shout"};
    std::string artists[4] = {"The Archives", "Millie", "Helen Shapiro", "The Beatles"};

    Track myTracks[4];
    for (int i = 0; i < 4; i++) {
        myTracks[i] = Track(titles[i], artists[i]);
    }

    Collection music(myTracks);
    music.showTracks();

    return 0;
}

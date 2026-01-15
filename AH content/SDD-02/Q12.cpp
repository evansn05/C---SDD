#include <iostream>
#include <string>

// define the maze as a 2D array
int maze[4][5] = {
    {0, 0, 1, 0, 1},
    {1, 0, 1, 0, 1},
    {1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1}
};

// struct to store coordinates
struct Position {
    int row;
    int col;

    // equality operator so we can compare positions
    bool operator==(const Position& other) const {
        return row == other.row && col == other.col;
    }
};

// define the rooms
Position rooms[8] = {
    {0, 0}, // kitchen
    {0, 1}, // living space
    {1, 1}, // bedroom #1
    {2, 1}, // bedroom #2
    {2, 2}, // hallway
    {2, 3}, // staircase
    {1, 3}, // bedroom #3
    {0, 3}  // exit
};

// descriptions
std::string descriptions[8] = {
    "kitchen", "living space", "bedroom #1", "bedroom #2",
    "hallway", "staircase", "bedroom #3", "exit"
};

// starting position
Position starting_position = rooms[0];

// function to find the index of a room in the rooms array
int findRoomIndex(const Position& pos) {
    for (int i = 0; i < 8; i++) {
        if (rooms[i] == pos) return i;
    }
    return -1; // not found
}

int main() {
    Position position = starting_position;
    std::cout << "You start in the " << descriptions[0] << " (room 0).\n";

    while (true) {
        int room_index = findRoomIndex(position);
        if (room_index != -1) {
            std::cout << "You are currently in the " << descriptions[room_index]
                      << " (room " << room_index << ").\n";
        } else {
            std::cout << "You are in a mysterious place!\n";
        }

        if (position == rooms[7]) { // exit
            std::cout << "Congratulations! You have reached the exit!\n";
            break;
        }

        std::cout << "Where do you want to move? (Up/Down/Left/Right) > ";
        std::string direction;
        std::getline(std::cin, direction);

        // convert to lowercase
        for (auto & c : direction) c = tolower(c);

        Position new_position = position;
        if (direction == "up") {
            new_position.row -= 1;
        } else if (direction == "down") {
            new_position.row += 1;
        } else if (direction == "left") {
            new_position.col -= 1;
        } else if (direction == "right") {
            new_position.col += 1;
        } else {
            std::cout << "Invalid direction! Please enter Up, Down, Left, or Right.\n";
            continue;
        }

        // check boundaries
        if (new_position.row >= 0 && new_position.row < 4 &&
            new_position.col >= 0 && new_position.col < 5) {

            // check if walkable
            if (maze[new_position.row][new_position.col] == 0) {
                position = new_position;
            } else {
                std::cout << "You can't move there! There's a wall.\n";
            }
        } else {
            std::cout << "You can't move outside the maze!\n";
        }
    }

    return 0;
}

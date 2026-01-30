#include <iostream>
#include <string>

constexpr int MAX_COORDINATE = 50;
constexpr int NUM_DIRECTION = 4;

struct Direction {
    int dx;
    int dy;
};

// N, E, S, W
constexpr Direction DIRECTION_DELTAS[] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
const std::string DIRECTIONS = "NESW";

int xBound, yBound;
bool scent[MAX_COORDINATE + 1][MAX_COORDINATE + 1];

bool inBounds(int x, int y) {
    return x >= 0 && x <= xBound && y >= 0 && y <= yBound;
}

void goForward(int& x, int& y, int directionIndex, bool& isLost) {
    int nextX = x + DIRECTION_DELTAS[directionIndex].dx;
    int nextY = y + DIRECTION_DELTAS[directionIndex].dy;

    if (!inBounds(nextX, nextY)) {
        // Fall off only if no scent at current position
        if (!scent[x][y]) {
            scent[x][y] = true;
            isLost = true;
        }
        // If scent exists, ignore this command
    } else {
        x = nextX;
        y = nextY;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> xBound >> yBound;

    int x, y;
    char direction;
    std::string commands;

    // Process each robot's commands
    while (std::cin >> x >> y >> direction >> commands) {
        int directionIndex = DIRECTIONS.find(direction);
        bool isLost = false;

        for (char command : commands) {
            if (isLost) break;

            if (command == 'L') {
                directionIndex = (directionIndex + 3) % NUM_DIRECTION;
            } else if (command == 'R') {
                directionIndex = (directionIndex + 1) % NUM_DIRECTION;
            } else {
                goForward(x, y, directionIndex, isLost);
            }
        }

        std::cout << x << ' ' << y << ' ' << DIRECTIONS[directionIndex];
        if (isLost) std::cout << " LOST";
        std::cout << '\n';
    }

    return 0;
}
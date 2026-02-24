#include <iostream>
#include <string>

constexpr int MAX_COORDINATE = 50;
constexpr int NUM_DIRECTIONS = 4;

struct Delta {
    int dx, dy;
};

constexpr Delta DELTAS[] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
const std::string DIRS = "NESW";

int xBound, yBound;
bool scent[MAX_COORDINATE + 1][MAX_COORDINATE + 1];

bool inBounds(int x, int y) {
    return x >= 0 && x <= xBound && y >= 0 && y <= yBound;
}

void moveForward(int& x, int& y, int dirIdx, bool& isLost) {
    int nextX = x + DELTAS[dirIdx].dx;
    int nextY = y + DELTAS[dirIdx].dy;

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
    char dir;
    std::string commands;

    while (std::cin >> x >> y >> dir >> commands) {
        int dirIdx = DIRS.find(dir);
        bool isLost = false;

        for (char cmd : commands) {
            if (isLost)
                break;

            if (cmd == 'L') {
                dirIdx = (dirIdx + 3) % NUM_DIRECTIONS;
            } else if (cmd == 'R') {
                dirIdx = (dirIdx + 1) % NUM_DIRECTIONS;
            } else {
                moveForward(x, y, dirIdx, isLost);
            }
        }

        std::cout << x << ' ' << y << ' ' << DIRS[dirIdx];
        if (isLost)
            std::cout << " LOST";
        std::cout << '\n';
    }
}

#include <iostream>
#include <string>
#include <vector>

int gridSize;
std::vector<std::string> grid;

void dfs(int r, int c) {
    if (r < 0 || r >= gridSize || c < 0 || c >= gridSize || grid[r][c] == '0')
        return;

    grid[r][c] = '0';
    for (int dr = -1; dr <= 1; ++dr)
        for (int dc = -1; dc <= 1; ++dc)
            dfs(r + dr, c + dc);
}

int main() {
    int caseNum = 0;
    while (std::cin >> gridSize) {
        grid.resize(gridSize);
        int numEagles = 0;

        for (auto& row : grid)
            std::cin >> row;

        for (int r = 0; r < gridSize; ++r)
            for (int c = 0; c < gridSize; ++c)
                if (grid[r][c] == '1') {
                    dfs(r, c);
                    ++numEagles;
                }

        std::cout << "Image number " << ++caseNum << " contains " << numEagles << " war eagles.\n";
    }
}

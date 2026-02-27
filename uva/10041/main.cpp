#include <cmath>

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int numCases;
    std::cin >> numCases;

    std::vector<int> streets;
    streets.reserve(500);

    while (numCases--) {
        int numRelatives;
        std::cin >> numRelatives;
        streets.resize(numRelatives);

        for (int& street : streets)
            std::cin >> street;

        std::nth_element(streets.begin(), streets.begin() + numRelatives / 2, streets.end());
        int median = streets[numRelatives / 2];

        std::cout << std::accumulate(streets.begin(), streets.end(), 0, [&](int acc, int street) {
            return acc + std::abs(street - median);
        }) << '\n';
    }
}

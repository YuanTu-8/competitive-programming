#include <cmath>

#include <iostream>

int main() {
    for (long long hashmat, opponent; std::cin >> hashmat >> opponent;)
        std::cout << std::abs(hashmat - opponent) << '\n';
}

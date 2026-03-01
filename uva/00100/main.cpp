#include <algorithm>
#include <iostream>
#include <unordered_map>

std::unordered_map<long long, int> cache;

int cycleLength(long long n) {
    if (n == 1)
        return 1;
    if (cache.count(n))
        return cache[n];

    return cache[n] = 1 + cycleLength((n % 2 == 0) ? (n / 2) : (3 * n + 1));
}

int main() {
    for (int i, j; std::cin >> i >> j;) {
        auto [lower, upper] = std::minmax(i, j);

        int maxLength = 0;
        for (int n = lower; n <= upper; ++n)
            maxLength = std::max(maxLength, cycleLength(n));

        std::cout << i << ' ' << j << ' ' << maxLength << '\n';
    }
}

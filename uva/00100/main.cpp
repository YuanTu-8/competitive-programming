#include <algorithm>
#include <iostream>
#include <unordered_map>

std::unordered_map<long long, int> cache;

int cycleLength(long long n) {
    if (n == 1) return 1;
    if (cache.count(n)) return cache[n];

    return cache[n] = 1 + cycleLength((n % 2 == 0) ? (n / 2) : (3 * n + 1));
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, j;
    while (std::cin >> i >> j) {
        int lower = std::min(i, j);
        int upper = std::max(i, j);

        int maxLength = 0;
        for (int n = lower; n <= upper; ++n) {
            maxLength = std::max(maxLength, cycleLength(n));
        }

        // Output preserves original input order
        std::cout << i << ' ' << j << ' ' << maxLength << '\n';
    }
}

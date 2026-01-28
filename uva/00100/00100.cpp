#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<long long, int> cycleCache;

// Compute Collatz cycle length with memoization
int computeCycleLength(long long n) {
    std::vector<long long> path;

    // Trace until reaching 1 or cached value
    while (n != 1 && cycleCache.count(n) == 0) {
        path.push_back(n);
        n = (n % 2 == 1) ? (3 * n + 1) : (n / 2);
    }

    int length = (n == 1) ? 1 : cycleCache[n];

    // Backfill cache in reverse order
    for (auto it = path.rbegin(); it != path.rend(); ++it) {
        cycleCache[*it] = ++length;
    }

    return length;
}

// Find max cycle length in [start, end]
int findMaxCycleLength(int start, int end) {
    int maxLen = 0;
    for (int n = start; n <= end; ++n) {
        maxLen = std::max(maxLen, computeCycleLength(n));
    }
    return maxLen;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, j;
    while (std::cin >> i >> j) {
        int start = std::min(i, j);
        int end = std::max(i, j);
        int maxLen = findMaxCycleLength(start, end);

        // Output preserves original input order
        std::cout << i << ' ' << j << ' ' << maxLen << '\n';
    }

    return 0;
}
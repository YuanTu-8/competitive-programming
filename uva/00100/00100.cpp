#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

static std::unordered_map<long long, int> memo;

//Calculate the cycle length with memoization
static int getCycleLength(long long number) {
	std::vector<long long> path;
	long long original = number;

	// Collect path until hitting 1 or memoized value
	while (number != 1 && memo.find(number) == memo.end()) {
		path.push_back(number);
		number = (number % 2 != 0) ? (3 * number + 1) : (number / 2);
	}

	// Get base cycle length
	int cycleLength = (number == 1) ? 1 : memo.at(number);

	// Backfill memo for all numbers in the path
	for (int i = static_cast<int>(path.size()) - 1; i >= 0; --i) {
		++cycleLength;
		memo[path[i]] = cycleLength;
	}

	return cycleLength;
}

// Find maximum cycle length in a given range
static int getMaxCycleLength(int start, int end) {
	int maxCycleLength = 0;

	for (int number = start; number <= end; ++number) {
		int cycleLength = getCycleLength(number);
		maxCycleLength = std::max(maxCycleLength, cycleLength);
	}

	return maxCycleLength;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int i, j;

	while (std::cin >> i >> j) {
		// Process range from min to max, but output in original order
		int start = std::min(i, j);
		int end = std::max(i, j);

		int maxCycleLength = getMaxCycleLength(start, end);

		// Critical: output must match input order
		std::cout << i << ' ' << j << ' ' << maxCycleLength << '\n';
	}

	return 0;
}
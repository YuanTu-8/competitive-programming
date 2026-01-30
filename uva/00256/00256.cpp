#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

std::map<int, std::vector<long long>> cache;

std::vector<long long>& getQuirksomeSquares(int numDigits) {
	// Return cached result if exists
	if (cache.count(numDigits)) {
		return cache[numDigits];
	}

	// Compute on first query
	std::vector<long long> results;
	int halfDigits = numDigits / 2;

	long long base = 1;
	for (int i = 0; i < halfDigits; ++i) {
		base *= 10;
	}

	for (long long left = 0; left < base; ++left) {
		for (long long right = 0; right < base; ++right) {
			long long number = left * base + right;
			long long sum = left + right;
			if (sum * sum == number) {
				results.push_back(number);
			}
		}
	}

	cache[numDigits] = std::move(results);
	return cache[numDigits];
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int numDigits;
	while (std::cin >> numDigits)
		for (long long number : getQuirksomeSquares(numDigits))
			std::cout << std::setw(numDigits) << std::setfill('0') << number << '\n';

	return 0;
}
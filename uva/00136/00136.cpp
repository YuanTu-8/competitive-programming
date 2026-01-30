#include <algorithm>
#include <iostream>

constexpr int TARGET = 1500;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long ugly[TARGET + 1];
	ugly[1] = 1;

	// Three pointers: track which ugly number to multiply by 2, 3, 5
	int ptr2 = 1, ptr3 = 1, ptr5 = 1;

	for (int i = 2; i <= TARGET; ++i) {
		long long candidate2 = ugly[ptr2] * 2;
		long long candidate3 = ugly[ptr3] * 3;
		long long candidate5 = ugly[ptr5] * 5;

		ugly[i] = std::min({ candidate2, candidate3, candidate5 });

		// Advance all pointers that produced the minimum (handles duplicates)
		if (ugly[i] == candidate2) ++ptr2;
		if (ugly[i] == candidate3) ++ptr3;
		if (ugly[i] == candidate5) ++ptr5;
	}

	std::cout << "The 1500'th ugly number is " << ugly[TARGET] << ".\n";
	return 0;
}
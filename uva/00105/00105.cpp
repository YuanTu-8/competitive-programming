#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

struct Event {
	int x;
	int height;  // positive = building starts, negative = building ends

	// Sort by x; at same x, larger height first.
	// Ensures starts before ends, avoids false height drops to 0.
	bool operator<(const Event& other) const {
		if (x != other.x) return x < other.x;
		return height > other.height;
	}
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::vector<Event> events;
	int left, height, right;

	while (std::cin >> left >> height >> right) {
		events.push_back({ left, height });
		events.push_back({ right, -height });
	}

	std::sort(events.begin(), events.end());

	std::multiset<int> activeHeights;
	activeHeights.insert(0);  // ground level as baseline

	int prevMaxHeight = 0;
	bool isFirst = true;

	for (const auto& event : events) {
		if (event.height > 0) {
			activeHeights.insert(event.height);
		}
		else {
			activeHeights.erase(activeHeights.find(-event.height));
		}

		int currMaxHeight = *activeHeights.rbegin();
		if (currMaxHeight == prevMaxHeight) continue;

		if (!isFirst) std::cout << ' ';
		std::cout << event.x << ' ' << currMaxHeight;
		isFirst = false;
		prevMaxHeight = currMaxHeight;
	}

	std::cout << '\n';
	return 0;
}
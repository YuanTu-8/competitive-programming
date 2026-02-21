#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

enum class EventType { Start, End };

struct Event {
    int x;
    int height;
    EventType type;
};

std::vector<Event> buildSortedEvents() {
    std::vector<Event> events;
    int left, height, right;
    while (std::cin >> left >> height >> right) {
        events.push_back({left, height, EventType::Start});
        events.push_back({right, height, EventType::End});
    }

    std::sort(events.begin(), events.end(), [](const Event& a, const Event& b) {
        if (a.x != b.x) return a.x < b.x;
        // At same x: starts before ends, taller before shorter
        if (a.type != b.type) return a.type < b.type;  // Start(0) < End(1)

        return a.type == EventType::Start ? a.height > b.height   // starts: taller first
                                          : a.height < b.height;  // ends: shorter first
    });
    return events;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto events = buildSortedEvents();

    std::multiset<int> activeHeights = {0};  // ground level
    int prevMax = 0;
    const char* separate = "";

    for (const auto& event : events) {
        if (event.type == EventType::Start) {
            activeHeights.insert(event.height);
        } else {
            activeHeights.erase(activeHeights.find(event.height));
        }

        int currMax = *activeHeights.rbegin();
        if (currMax == prevMax) continue;

        std::cout << separate << event.x << ' ' << currMax;
        separate = " ";
        prevMax = currMax;
    }

    std::cout << '\n';
}

#include <iostream>
#include <map>
#include <string>

int main() {
    int numLines;
    std::cin >> numLines;
    std::map<std::string, int> count;

    for (std::string country, _; numLines--;) {
        std::cin >> country;
        std::getline(std::cin, _);
        ++count[country];
    }

    for (auto& [country, num] : count)
        std::cout << country << ' ' << num << '\n';
}

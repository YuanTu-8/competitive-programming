#include <cctype>

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

struct AnagramGroup {
    std::string word;
    int count = 0;
};

// Canonical form: lowercase + sorted characters
std::string normalize(std::string word) {
    for (char& c : word)
        c = std::tolower(c);

    std::sort(word.begin(), word.end());
    return word;
}

int main() {
    std::unordered_map<std::string, AnagramGroup> groups;

    for (std::string word; std::cin >> word && word != "#";) {
        auto& entry = groups[normalize(word)];
        if (entry.count++ == 0)
            entry.word = word;
    }

    std::vector<std::string> result;
    for (const auto& [_, entry] : groups)
        if (entry.count == 1)
            result.push_back(entry.word);

    std::sort(result.begin(), result.end());
    for (const auto& word : result) {
        std::cout << word << '\n';
    }
}

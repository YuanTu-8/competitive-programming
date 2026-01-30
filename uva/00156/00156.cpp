#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>
#include <vector>

// Convert word to canonical form: lowercase + sorted characters
std::string normalize(const std::string& word) {
	std::string result = word;
	for (char& letter : result)
		letter = std::tolower(letter);
	std::sort(result.begin(), result.end());
	return result;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	// Group words by their normalized form
	std::map<std::string, std::vector<std::string>> anagramGroups;

	std::string word;
	while (std::cin >> word && word != "#")
		anagramGroups[normalize(word)].push_back(word);

	// Collect words with no anagrams (group size = 1)
	std::vector<std::string> ananagrams;
	for (const auto& [key, group] : anagramGroups)
		if (group.size() == 1)
			ananagrams.push_back(group[0]);
	
	std::sort(ananagrams.begin(), ananagrams.end());

	for (const std::string& ananagram : ananagrams)
		std::cout << ananagram << '\n';

	return 0;
}
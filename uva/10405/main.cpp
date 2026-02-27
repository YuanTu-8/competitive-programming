#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (std::string a, b; std::getline(std::cin, a) && std::getline(std::cin, b);) {
        int lenA = a.length(), lenB = b.length();
        std::vector<std::vector<int>> lcs(lenA + 1, std::vector<int>(lenB + 1, 0));

        for (int i = 1; i <= lenA; ++i)
            for (int j = 1; j <= lenB; ++j)
                lcs[i][j] = (a[i - 1] == b[j - 1]) ? lcs[i - 1][j - 1] + 1
                                                   : std::max(lcs[i - 1][j], lcs[i][j - 1]);

        std::cout << lcs[lenA][lenB] << '\n';
    }
}

#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char c;
    bool expectOpenQuote = true;  // next quote should be opening

    while (std::cin.get(c)) {
        if (c == '\"') {
            std::cout << (expectOpenQuote ? "``" : "\'\'");
            expectOpenQuote = !expectOpenQuote;
        } else {
            std::cout << c;
        }
    }

    return 0;
}
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    bool isOpening = true;

    for (char c; std::cin.get(c);) {
        if (c == '\"') {
            std::cout << (isOpening ? "``" : "''");
            isOpening = !isOpening;
        } else {
            std::cout << c;
        }
    }
}

#include <iostream>

int main() {
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

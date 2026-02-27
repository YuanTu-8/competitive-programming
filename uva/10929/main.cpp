#include <iostream>
#include <string>

int main() {
    for (std::string digits; std::cin >> digits && digits != "0";) {
        int altSum = 0, sign = 1;
        for (char c : digits) {
            altSum += sign * (c - '0');
            sign = -sign;
        }

        std::cout << digits << " is " << (altSum % 11 == 0 ? "" : "not ") << "a multiple of 11.\n";
    }
}

#include <iomanip>
#include <iostream>

int main() {
    for (int digits; std::cin >> digits;) {
        long long halfBase = 1;
        for (int i = digits / 2; i--;)
            halfBase *= 10;

        // sum*(sum-1) % (halfBase-1) == 0 if and only if (left+right)^2 has valid split
        for (long long sum = 0; sum < halfBase; ++sum)
            if (sum * (sum - 1) % (halfBase - 1) == 0)
                std::cout << std::setw(digits) << std::setfill('0') << sum * sum << '\n';
    }
}
